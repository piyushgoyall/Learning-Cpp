// A sorted array has been rotated about an element or pivot eg. [1,3,8,10,17] -> [8,10,17,1,3]. So you are supposed to resturn the pivot i.e. 3 in this case

#include <bits/stdc++.h>
using namespace std;

int getPivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int main()
{
    int arr[5] = {8, 10, 17, 1, 3};
    cout << "Pivot is: " << getPivot(arr, 5) << endl;
    return 0;
}