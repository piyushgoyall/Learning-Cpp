#include <bits/stdc++.h>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy values
    int mainArrIdx = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrIdx++];
    }

    mainArrIdx = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrIdx++];
    }

    // merge 2 sorted arrays
    int idx1 = 0;
    int idx2 = 0;
    mainArrIdx = s;

    while (idx1 < len1 && idx2 < len2)
    {
        if (first[idx1] < second[idx2])
        {
            arr[mainArrIdx++] = first[idx1++];
        }
        else
        {
            arr[mainArrIdx++] = second[idx2++];
        }
    }

    while (idx1 < len1)
    {
        arr[mainArrIdx++] = first[idx1++];
    }
    while (idx2 < len2)
    {
        arr[mainArrIdx++] = second[idx2++];
    }

    delete[] first;
    delete[] second;
}

void mergeSort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }

    int mid = s + (e - s) / 2;

    // sort the left part
    mergeSort(arr, s, mid);

    // sort the right part
    mergeSort(arr, mid + 1, e);

    // merge
    merge(arr, s, e);
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

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}