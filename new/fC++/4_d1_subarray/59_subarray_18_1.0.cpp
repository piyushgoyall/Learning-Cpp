// // CUMULATIVE SUM APPROACH / PREFIX SUM APPROACH

#include <bits/stdc++.h>
using namespace std;

void maxSubarraySum(int *arr, int n)
{
    int pref[100] = {0};
    pref[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        pref[i] = arr[i] + pref[i - 1];
    }

    int ls = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = (i > 0) ? (pref[j] - pref[i - 1]) : (pref[j]);
            ls = max(ls, sum);
        }
    }
    cout << ls;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    maxSubarraySum(arr, n);
    return 0;
}