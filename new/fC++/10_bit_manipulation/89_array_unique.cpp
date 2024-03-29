// Write a program to find a unique number in an array where all numbers except one are present twice.

#include <bits/stdc++.h>
using namespace std;
int unique(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
        // cout << "- " << xorsum << " -" << endl;
    }
    return xorsum;
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
    cout << unique(arr, n) << endl;
    return 0;
}