// Matrix Chain Multiplication
// Problem: We are given 'n' matrices, we have to mutiply them in such a way that total no. of operations are minimum.
// Tabulation (Bottom Up)
// Build from base
// For each gap = 0 to gap = n-2, compute all submatrix multiplication and their results.
// Build the answer using, for every k = i to k = j - 1
// dp[i][j] = min(dp[i][j], dp[i][k] + dp[k+1][j] + a[i-1] x a[k] x a[j])
// Time complexity: O(n^3)

// Tabulation

#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 102, MOD = 1e9 + 7;
int a[N];
int dp[N][N];

signed main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 1; i < n; i++)
    {
        dp[i][i] = 0;
    }

    for (int l = 2; l < n; l++)
    {
        for (int i = 1; i < n - l + 1; i++)
        {
            int j = i + l - 1;
            dp[i][j] = MOD;
            for (int k = i; k < j; k++)
            {
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j] + a[i - 1] * a[k] * a[j]);
            }
        }
    }

    cout << dp[1][n - 1] << endl;
    return 0;
}

// Memoization

// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// const int N = 102, MOD = 1e9 + 7;
// int a[N];
// int dp[N][N];

// int mcm(int i, int j)
// {
//     if (i == j)
//     {
//         return 0;
//     }

//     if (dp[i][j] != -1)
//     {
//         return dp[i][j];
//     }

//     dp[i][j] = MOD;
//     for (int k = i; k < j; k++)
//     {
//         dp[i][j] = min(dp[i][j], mcm(i, k) + mcm(k + 1, j) + a[i - 1] * a[k] * a[j]);
//     }

//     return dp[i][j];
// }

// signed main()
// {
//     int n;
//     cin >> n;

//     memset(dp, -1, sizeof dp);

//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     cout << mcm(1, n - 1) << endl;
//     return 0;
// }