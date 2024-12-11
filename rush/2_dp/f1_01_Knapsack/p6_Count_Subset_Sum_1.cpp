// Given an array of positive integers arr of size n and a target sum sum, 
// determine the number of subsets in the array whose elements sum up to the given target sum

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

    int sum;
    cin >> sum;

    int dp[n + 1][sum + 1];

    for (int i = 0; i <= sum; i++)
    {
        dp[0][i] = 0;
    }

    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            if (arr[i - 1] <= j)
                dp[i][j] = dp[i - 1][j] + dp[i - 1][j - arr[i - 1]];

            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    cout << dp[n][sum];

    return 0;
}