// Find the first and the last occurrence of a number in a sorted array.

#include <bits/stdc++.h>
using namespace std;

int focc(int arr[], int n, int k)
{
    int s = 0, e = n - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + ((e - s) / 2);
        if (arr[mid] == k)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (k < arr[mid])
        {
            e = mid - 1;
        }
        else if (k > arr[mid])
        {
            s = mid + 1;
        }
    }
    return ans;
}

int locc(int arr[], int n, int k)
{
    int s = 0, e = n - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + ((e - s) / 2);
        if (arr[mid] == k)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (k < arr[mid])
        {
            e = mid - 1;
        }
        else if (k > arr[mid])
        {
            s = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int even[11] = {1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 5};
    cout << "First occurrence of 3: " << focc(even, 11, 3) << endl;
    cout << "Last occurrence of 3: " << locc(even, 11, 3) << endl;
    return 0;
}