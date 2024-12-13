// Minimum Subset Sum Difference

// Given an array of positive integers, divide the array into two subsets such that
// the absolute difference between the sum of the subsets is minimized. 
// Return the minimum difference.

#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> arr, int n, int range)
{
    bool dp[n + 1][range + 1];

    for (int i = 0; i <= range; i++)
    {
        dp[0][i] = false;
    }

    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = true;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= range; j++)
        {
            if (arr[i - 1] <= j)
                dp[i][j] = (dp[i - 1][j - arr[i - 1]]) || (dp[i - 1][j]);
            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    int size = range / 2;
    vector<bool> ans(size + 1);
    for (int i = 0; i <= size; i++)
    {
        ans[i] = dp[n][i];
    }

    int minVal = INT_MAX;
    for (int i = 0; i <= size; i++)
    {
        if (ans[i])
            minVal = min(minVal, range - (2 * i));
    }

    return minVal;
}

int main()
{
    int n;
    cin >> n;

    int range = 0;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        range += arr[i];
    }

    cout << solve(arr, n, range);
    return 0;
}
