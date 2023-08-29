#include <bits/stdc++.h>
using namespace std;

int binary(int arr[], int n, int x)
{
    int start = 0, end = n - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (x == arr[mid])
        {
            return mid;
        }
        else if (x < arr[mid])
        {
            end = mid - 1;
        }
        else if (x > arr[mid])
        {
            start = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    cout << binary(arr, n, x);
    return 0;
}