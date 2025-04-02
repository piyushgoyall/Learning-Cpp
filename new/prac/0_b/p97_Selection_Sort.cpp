#include <bits/stdc++.h>
using namespace std;

void printArr(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

void selectionSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int temp = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[temp])
                temp = j;
        }
        swap(arr[i], arr[temp]);
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    selectionSort(arr, n);
    printArr(arr, n);
    return 0;
}