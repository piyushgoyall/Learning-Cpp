// Coin change problem: Minimum number of coins

// Problem Statement: Coin Change Problem - Minimum Number of Coins
// You are given a set of n distinct coin denominations represented by an array arr and an integer sum.
// Your task is to determine the minimum number of coins required to make the given sum.
// If it is not possible to make the sum using the given denominations, return a value indicating that.

// Input:
//       - An integer n, representing the number of coin denominations.
//       - An array arr of size n containing the coin denominations.
//       - An integer sum, representing the target value to be achieved.
// Output:
//       - Print the minimum number of coins required to make the target sum.
//       - If the target sum cannot be achieved, return a special value (e.g., -1).

#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &arr, int n, int sum)
{
    int dp[n + 1][sum + 1];

    for (int i = 0; i <= n; i++)
        dp[i][0] = 0;

    for (int i = 0; i <= sum; i++)
        dp[0][i] = INT_MAX - 1;

    for (int i = 1; i <= sum; i++)
    {
        if (i % arr[0] == 0)
            dp[1][i] = i / arr[0];
        else
            dp[1][i] = INT_MAX - 1;
    }

    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            if (arr[i - 1] <= j)
                dp[i][j] = min(dp[i][j - arr[i - 1]] + 1, dp[i - 1][j]);
            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    int result = dp[n][sum];
    return result == INT_MAX - 1 ? -1 : result;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int sum;
    cin >> sum;

    int result = solve(arr, n, sum);
    if (result == -1)
        cout << "It is not possible to make the sum." << endl;
    else
        cout << "Minimum number of coins required: " << result << endl;

    return 0;
}
