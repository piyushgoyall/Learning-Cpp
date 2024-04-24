#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int *arr, int n)
{
    // Base Case
    if (n == 0 || n == 1)
    {
        return;
    }

    // Solve on case
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    // Recursive case
    bubbleSort(arr, n - 1);
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

    bubbleSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}