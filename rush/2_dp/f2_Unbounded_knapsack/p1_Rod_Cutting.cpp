// Problem Statement : Rod Cutting Problem with Lengths

// You are given a rod of length n, an array lengths representing the available lengths of rod pieces,
// and an array prices where prices[i] represents the price of a rod of length lengths[i].
// Your task is to determine the maximum revenue that can be obtained by cutting the rod into pieces
// of the given lengths and selling them based on the provided prices.

#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &length, vector<int> &prices, int n, int m)
{
    int dp[m + 1][n + 1];

    for (int i = 0; i <= n; i++)
        dp[0][i] = 0;

    for (int i = 0; i <= m; i++)
        dp[i][0] = 0;

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (length[i - 1] <= j)
                dp[i][j] = max(prices[i - 1] + dp[i][j - length[i - 1]], dp[i - 1][j]);
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    return dp[m][n];
}

int main()
{
    int n;
    cout << "Enter the rod length: ";
    cin >> n;

    int m;
    cout << "\n"
         << "Enter length of length array: ";
    cin >> m;
    vector<int> length(m);
    for (int i = 0; i < m; i++)
        cin >> length[i];

    vector<int> prices(m);
    for (int i = 0; i < m; i++)
        cin >> prices[i];

    cout << "\n"
         << "Maximum Price:" << solve(length, prices, n, m);

    return 0;
}