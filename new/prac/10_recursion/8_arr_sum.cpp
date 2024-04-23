// Print sum of array elements

#include <bits/stdc++.h>
using namespace std;

int arrSum(int *arr, int n)
{
    if (n == 0)
        return 0;

    if (n == 1)
        return arr[0];

    return arr[0] + arrSum(arr + 1, n - 1);
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

    cout << arrSum(arr, n);

    return 0;
}