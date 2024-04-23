#include <bits/stdc++.h>
using namespace std;

bool biSrch(int *arr, int st, int en, int key)
{
    // Base case
    if (st > en)
    {
        return false;
    }

    int mid = st + (en - st) / 2;

    if (arr[mid] == key)
        return true;

    if (arr[mid] < key)
        return biSrch(arr, mid + 1, en, key);

    else
        return biSrch(arr, st, mid - 1, key);
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

    int key;
    cin >> key;

    cout << biSrch(arr, 0, n, key);
    return 0;
}