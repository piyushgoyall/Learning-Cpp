// 0 - 1 KNAPSACK
// Problem: Given an array of items with their Weight, Value and a Knapsack(bori) with weight W.
// Find the maximum value of items that can be stolen and put into knapsack.
// [Note: We either have to pick full item(i) or no item(O)]

// It is important to note that we cannot apply greedy technique here ass items are indivisible.
// Way of Thinking
// We iterate from left to right in items array. For each item we have 2 choices
// 1) Take it = remaining capacity of Knapsack
// 2) Not take it = Capacity reamins same

// Brute force
// 1) Make all the subsequence and pick the one with maximum value, which fits the constraint of Knapsack.
//    Time Complexity = (2^n) [n = number of items]

// Optimal Solution (Using DP)

// Approach 1(Memoization)
// 1) Write the recursive solution
// 2) Memoize it

// Approach 2(Tabulation)
// 1) For every items, compute the answer for every weight from 0 - W
// 2) Use the recurrence of taking and not taking.
//            dp[n][w] = max(dp[n-1][w], dp[n-1][w-wt[n]] + val[n])
// 3) Output the answer
// Time Complexity: O(n * w)

// MEMOIZATION

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

const int N = 1e3 + 2, MOD = 1e9 + 7;
int val[N], wt[N];
int dp[N][N];

int Knapsack(int n, int w)
{
    if (w <= 0)
        return 0;

    if (n <= 0)
        return 0;

    if (dp[n][w] != -1)
        return dp[n][w];

    if (wt[n - 1] > w)
        dp[n][w] = Knapsack(n - 1, w);

    else
        dp[n][w] = max(Knapsack(n - 1, w), Knapsack(n - 1, w - wt[n - 1]) + val[n - 1]);

    return dp[n][w];
}

signed main()
{
    rep(i, 0, N)
    {
        rep(j, 0, N)
            dp[i][j] = -1;
    }

    int n;
    cin >> n;

    rep(i, 0, n)
    {
        cin >> wt[i];
    }
    rep(i, 0, n)
            cin >>
        val[i];
    int w;
    cin >> w;

    cout << Knapsack(n, w) << endl;
    return 0;
}

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
// int val[N], wt[N];

// int Knapsack(int n, int w)
// {
//     if (w <= 0)
//         return 0;

//     if (n <= 0)
//         return 0;

//     if (wt[n - 1] > w)
//         return Knapsack(n - 1, w);

//     return max(Knapsack(n - 1, w), Knapsack(n - 1, w - wt[n - 1]) + val[n - 1]);
// }

// signed main()
// {
// int n;
// cin >> n;

// rep(i, 0, n)
// {
//     cin >> wt[i];
// }
// rep(i, 0, n)
//         cin >>
//     val[i];
// int w;
// cin >> w;

// cout << Knapsack(n, w) << endl;
// return 0;
// }