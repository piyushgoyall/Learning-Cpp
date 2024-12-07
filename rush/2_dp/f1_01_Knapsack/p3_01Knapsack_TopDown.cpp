#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int weight[n];
    int value[n];
    int capacity;

    for (int i = 0; i < n; i++)
    {
        cin >> weight[i] >> value[i];
    }

    cin >> capacity;

    int dp[n + 1][capacity + 1];

    for (int i = 0; i < n + 1; i++)
    {
        dp[i][0] = 0;
    }

    for (int i = 0; i < capacity + 1; i++)
    {
        dp[0][i] = 0;
    }

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < capacity + 1; j++)
        {
            if (weight[i - 1] <= j)
                dp[i][j] = max((value[i - 1] + dp[i - 1][j - weight[i - 1]]), dp[i - 1][j]);
            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    cout << dp[n][capacity];

    return 0;
}