// Coin Change Problem - Dynamic Programming
// Problem: Given a set of coins and a value 'V'. Find the number of ways we can make change of 'V'.
// Problem: S = {1,2,3}  V = 3
//          Possible ways to make change are: {3}, {2,1}, {1,1,1}
// Note: {1,2} is not counted as a separate as it is same as {2,1}
// To make ways with every coin, we have 2 options
// a) Take down
// b) Do not take it.
// cnt(S[],m,V) = cnt(S[],m,v-Sm) + cnt(S[],m-1,V)
// Since it can be represented as a Recurrence Relation, hence it has Optimal Substructure Property.

// Approach 1 : (Using Memoization)
//            1) Write the rucurrence solution.
//            2) Memoize it -> Basically means, create a DP table and store the results.

// Approach 2 : (Tabulation Bottom Up)
//            1) Take each coin one by one and fill DP table till that coin, for all the values from 0 to V.

// Approach 3 : (Tabulation with Space Efficiency)
//              1) Just a minor change in approach 2.
//              2) We know for every cell, we have 2 options;
//                  1) Take that coin
//                  2) Do not take that coin. {We do no take an extra row, Update on the same cell}

// // Iterative Version

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

// const int N = 1e3 + 2;

// signed main()
// {
//     int n;
//     cin >> n;

//     vi a(n);
//     rep(i, 0, n)
//             cin >>
//         a[i];

//     int x;
//     cin >> x;

//     vvi dp(n + 1, vi(x + 1, 0));
//     dp[0][0] = 1;

//     rep(i, 1, n + 1)
//     {
//         rep(j, 0, x + 1)
//         {
//             if (j - a[i - 1] >= 0)
//                 dp[i][j] += dp[i][j - a[i - 1]];
//             dp[i][j] += dp[i - 1][j];
//         }
//     }
//     cout << dp[x];
// }

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

// const int N = 1e3 + 2;
// int dp[N][N];

// int CoinChange(vi &a, int n, int x)
// {
//     if (x == 0)
//         return 1;

//     if (x < 0)
//         return 0;

//     if (n <= 0)
//         return 0;

//     if (dp[n][x] != -1)
//         return dp[n][x];

//     dp[n][x] = CoinChange(a, n, x - a[n - 1]) + CoinChange(a, n - 1, x);

//     return dp[n][x];
// }

// signed main()
// {
//     rep(i, 0, N)
//     {
//         rep(j, 0, N)
//             dp[i][j] = -1;
//     }
//     int n;
//     cin >> n;

//     vi a(n);
//     rep(i, 0, n)
//             cin >>
//         a[i];

//     int x;
//     cin >> x;

//     cout << CoinChange(a, n, x) << endl;
// }

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

// const int N = 1e3 + 2;

// int CoinChange(vi &a, int n, int x)
// {
//     if (x == 0)
//         return 1;
//     if (x < 0)
//         return 0;
//     if (n <= 0)
//         return 0;
//     return CoinChange(a, n, x - a[n - 1]) + CoinChange(a, n - 1, x);
// }

// signed main()
// {
//     int n;
//     cin >> n;

//     vi a(n);
//     rep(i, 0, n)
//             cin >>
//         a[i];

//     int x;
//     cin >> x;

//     cout << CoinChange(a, n, x) << endl;
// }