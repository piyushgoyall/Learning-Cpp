// Subset Sum Problem

// Problem Statement : Subset Sum Problem
// You are given an array of integers arr of size n and an integer summ.
// Your task is to determine whether there exists a subset of the array whose elements sum up to the given value summ.

// Input : - An integer n, representing the size of the array.
//         - An array arr of size n containing integers.
//         - An integer summ, representing the target sum.

// Output : Print "YES", if there exists a subset whose sum equals summ.
//          Print "NO" otherwise.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int summ;
    cin >> summ;

    bool dp[n + 1][summ + 1];

    for (int i = 0; i < summ + 1; i++)
    {
        dp[0][i] = false;
    }

    for (int i = 0; i < n + 1; i++)
    {
        dp[i][0] = true;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= summ; j++)
        {
            if (arr[i - 1] <= j)
                dp[i][j] = (dp[i - 1][j - arr[i - 1]]) || (dp[i - 1][j]);
            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    cout << (dp[n][summ] ? "YES" : "NO");

    return 0;
}