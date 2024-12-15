#include <bits/stdc++.h>
using namespace std;

int static dp[1001][1001];

int solve(string &s1, string &s2, int l1, int l2)
{
    if (l1 == 0 || l2 == 0)
        return 0;

    if (dp[l1][l2] != -1)
        return dp[l1][l2];

    if (s1[l1 - 1] == s2[l2 - 1])
    {
        dp[l1][l2] = 1 + solve(s1, s2, l1 - 1, l2 - 1);
    }

    else
    {
        dp[l1][l2] = max(solve(s1, s2, l1, l2 - 1), solve(s1, s2, l1 - 1, l2));
    }

    return dp[l1][l2];
}

int main()
{
    memset(dp, -1, sizeof(dp));

    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    cout << solve(s1, s2, s1.length(), s2.length());

    return 0;
}