#include <bits/stdc++.h>
using namespace std;

void printArr(vector<int> &arr)
{
    for (int i : arr)
        cout << i << " ";
}

void insertionSortM1(vector<int> &arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j] < arr[j - 1])
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }
}

void insertionSortM2(vector<int> &arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i], j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // insertionSortM1(arr, n);
    insertionSortM2(arr, n);
    printArr(arr);
    return 0;
}