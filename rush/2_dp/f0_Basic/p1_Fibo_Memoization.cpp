// Return n'th fibonacci number(0 based indexing).
// T.C. = O(n), S.C. = O(n) + O(n) {Stack space + Array spapce}

#include <bits/stdc++.h>
using namespace std;

int fibo(int n, vector<int> &dp)
{
    if (n <= 1)
        return n;

    if (dp[n] != -1)
        return dp[n];

    dp[n] = fibo(n - 1, dp) + fibo(n - 2, dp);
    return dp[n];
}

int main()
{
    int n;
    cin >> n;

    vector<int> dp(n + 1, -1);
    cout << fibo(n, dp);
    return 0;
}