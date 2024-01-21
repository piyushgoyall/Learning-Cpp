// ALLOCATE MINIMUM PAGES
// n - number of pages in n different books[ascending order]
// m - number of students
// All the books have to be divided among m students,consecutively.
// Allocate the pages in such a way that maximum pages allocated to a student is minimum.

// Strategy : Apply binary search for minimum & maximum possible values of 'max' pages.
// Check the feasibility of this chosen value.
// Checking Feasibility : Assign pages to each student in a sequential manner, while the current number of allocate pages don't exceed the value set by binary search.
//                        If during allocation the number of students don't exceed the limit of 'm', then the solution is feasible. Else, it isn't

#include <bits/stdc++.h>
using namespace std;

bool isPossible(int arr[], int n, int m, int min)
{
    int sutdentsRequired = 1, sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > min)
        {
            return false;
        }
        if (sum + arr[i] > min)
        {
            sutdentsRequired++;
            sum = arr[i];

            if (sutdentsRequired > m)
            {
                return false;
            }
        }
        else
        {
            sum += arr[i];
        }
    }
    return true;
}

int allocateMinimumPages(int arr[], int n, int m)
{
    int sum = 0;
    if (n < m)
    {
        return -1;
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    int start = 0, end = sum, ans = INT_MAX;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (isPossible(arr, n, m, mid))
        {
            ans = min(ans, mid);
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int arr[] = {12, 34, 67, 90};
    int n = 4;
    int m = 2;
    cout << "The minimum no of pages : " << allocateMinimumPages(arr, n, m) << endl;
    return 0;
}
