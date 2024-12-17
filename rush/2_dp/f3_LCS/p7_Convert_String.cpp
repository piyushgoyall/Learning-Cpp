// Minimum number of insertion and deletion to convert string a to string b.

#include <bits/stdc++.h>
using namespace std;

int solve(string &s1, string &s2, int n, int m)
{
    int dp[n + 1][m + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (s1[i - 1] == s2[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
        }
    }

    return dp[n][m];
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    int n = s1.length(), m = s2.length();

    int lcsLength = solve(s1, s2, n, m);

    cout << "Insertions: " << m - lcsLength;
    cout << endl;
    cout << "Deletions: " << n - lcsLength;
    return 0;
}