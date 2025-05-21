#include <bits/stdc++.h>
using namespace std;

int EditDistance(const string &s1, const string &s2, int Ci, int Cd, int Cs)
{
    int m = s1.length();
    int n = s2.length();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1));

    for (int i = 0; i <= m; i++)
        dp[i][0] = i * Cd;
    for (int j = 0; j <= n; j++)
        dp[0][j] = j * Ci;

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (s1[i - 1] == s2[j - 1])
                dp[i][j] = dp[i - 1][j - 1];
            else
                dp[i][j] = min({dp[i - 1][j] + Cd, dp[i][j - 1] + Ci, dp[i - 1][j - 1] + Cs});
        }
    }
    return dp[m][n];
}

int main()
{
    vector<string> dictionary = {"cred", "bet", "shat", "that", "brad", "cart", "brat", "card"};
    string input = "dat";
    int Ci = 1, Cd = 1, Cs = 1;

    cout << "Suggested words: ";

    for (const string &word : dictionary)
    {
        int dist = EditDistance(input, word, Ci, Cd, Cs);
        if (dist <= 2)
            cout << word << " ";
    }

    cout << endl;
    return 0;
}
