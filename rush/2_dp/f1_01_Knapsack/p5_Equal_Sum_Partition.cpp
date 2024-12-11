#include <bits/stdc++.h>
using namespace std;

bool subsetSum(vector<int> arr, int n, int summ)
{
    bool dp[n + 1][summ + 1];

    for (int i = 0; i <= summ; i++)
    {
        dp[0][i] = false;
    }

    for (int i = 0; i <= n; i++)
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

    return dp[n][summ];
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int summ = 0;
    for (int i = 0; i < n; i++)
    {
        summ += arr[i];
    }

    if (summ % 2 != 0)
        cout << "No";

    else
        cout << ((subsetSum(arr, n, summ / 2)) ? "Yes" : "No");

    return 0;
}