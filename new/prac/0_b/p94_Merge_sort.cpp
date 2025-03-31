#include <bits/stdc++.h>
using namespace std;

void printArr(vector<int> arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';
}

void merge(vector<int> &arr, int start, int mid, int end)
{
    int size1 = mid - start + 1;
    int size2 = end - mid;

    vector<int> arr1(size1);
    vector<int> arr2(size2);

    for (int i = 0; i < size1; i++)
        arr1[i] = arr[start + i];
    for (int i = 0; i < size2; i++)
        arr2[i] = arr[mid + 1 + i];

    int i = 0, j = 0, temp = start;
    while (i < size1 && j < size2)
    {
        if (arr1[i] <= arr2[j])
        {
            arr[temp] = arr1[i];
            i++;
            temp++;
        }
        else
        {
            arr[temp] = arr2[j];
            j++;
            temp++;
        }
    }

    while (i < size1)
    {
        arr[temp] = arr1[i];
        i++;
        temp++;
    }

    while (j < size2)
    {
        arr[temp] = arr2[j];
        j++;
        temp++;
    }
}

void mergeSort(vector<int> &arr, int start, int end)
{
    if (start < end)
    {
        int mid = start + (end - start) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);
    printArr(arr, n);

    return 0;
}