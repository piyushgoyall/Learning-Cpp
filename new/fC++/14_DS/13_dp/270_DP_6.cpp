// Longest Increasing Subsequence
// Problem: You are given an array. Find the length of longest increasing subsequence.
// Subarray: Continuous block of elements
// Subsequence: Part of the arry in order. It may or may not be continuous.
// Every subarray is a subsequence but not every subsequence is not a subarray.
// Ex: [1, 4, 2, 5, 3]   Can be: {1, 4, 5} & {1, 2, 3}
//                          Ans: 3

// Approach: (Using Tabulation)
// 1) Make a dp array and initialize all the dp(i) by 1.
//    {Since single element is also an Lis}
// 2) For every i from left to right, iterate from j = 0 to j = i - 1
// Checking
//      If (a[i] > a[j])
//          dp[i] = max(dp[i], 1 + dp[j])
// After loops ends, Output [dp(n-1)]
// Time Complexity: O(n^2)

// Tabulation

#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = 0; i < b; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

const int N = 1e5 + 2, MOD = 1e9 + 7;

signed main()
{
    int n;
    cin >> n;

    vi a(n);
    rep(i, 0, n)
    {
        cin >> a[i];
    }

    vi dp(n, 1);
    int ans = 0;

    rep(i, 1, n)
    {
        rep(j, 0, i)
        {
            if (a[i] > a[j])
                dp[i] = max(dp[i], 1 + dp[j]);
        }
        ans = max(ans, dp[i]);
    }

    cout << ans << endl;
    return 0;
}

// // Memoization

// #include <bits/stdc++.h>
// using namespace std;

// #define vi vector<int>
// #define vvi vector<vi>
// #define pii pair<int, int>
// #define vii vector<pii>
// #define rep(i, a, b) for (int i = 0; i < b; i++)
// #define ff first
// #define ss second
// #define setBits(x) builtin_popcount(x)

// const int N = 1e5 + 2, MOD = 1e9 + 7;
// int dp[N];

// int lis(vi &a, int n)
// {
//     if (dp[n] != -1)
//         return dp[n];
//     dp[n] = 1; // single element is also an lis

//     rep(i, 0, n)
//     {
//         if (a[n] > a[i])
//             dp[n] = max(dp[n], 1 + lis(a, i));
//     }

//     return dp[n];
// }

// signed main()
// {
//     rep(i, 0, N)
//         dp[i] = -1;

//     int n;
//     cin >> n;

//     vi a(n);
//     rep(i, 0, n)
//     {
//         cin >> a[i];
//     }

//     cout << lis(a, n - 1) << endl;

//     return 0;
// }