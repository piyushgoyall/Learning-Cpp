#include <bits/stdc++.h>
using namespace std;

void printArr(vector<int> &arr)
{
    for (int i : arr)
        cout << i << " ";
}

void bubbleSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
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