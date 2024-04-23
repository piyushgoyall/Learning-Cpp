// Check if arr is sorted or not

#include <bits/stdc++.h>
using namespace std;

bool isSorted(int *arr, int size)
{
    if (size == 0 || size == 1)
        return true;

    if (arr[0] > arr[1])
        return false;

    else
    {
        bool check = isSorted(arr + 1, size - 1);
        return check;
    }
}

int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << isSorted(arr, n) << endl;
    return 0;
}