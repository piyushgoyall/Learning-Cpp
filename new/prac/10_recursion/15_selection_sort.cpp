#include <bits/stdc++.h>
using namespace std;

void selSort(int *arr, int st, int en)
{
    if (st >= en - 1)
        return;

    int minn = st;
    for (int i = st + 1; i < en; i++)
    {
        if (arr[i] < arr[minn])
            minn = i;
    }
    
    swap(arr[st], arr[minn]);
    selSort(arr, st + 1, en);
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

    selSort(arr, 0, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    delete[] arr;
    return 0;
}