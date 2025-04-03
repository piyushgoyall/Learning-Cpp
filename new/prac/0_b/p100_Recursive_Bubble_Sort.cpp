#include <bits/stdc++.h>
using namespace std;

void printArr(vector<int> &arr)
{
    for (int i : arr)
        cout << i << " ";
}

void bubbleSort(vector<int> &arr, int n)
{
    if (n == 1)
        return;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    }

    bubbleSort(arr, n - 1);
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    bubbleSort(arr, n);
    printArr(arr);
    return 0;
}