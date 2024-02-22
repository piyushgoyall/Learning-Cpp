// Ugly Numbers
// Problem: Ugly numbers are numbers whose prime factors are 2, 3 or 5.
// The first 10 ugly numbers are 1, 2, 3, 4, 5, 6, 8, 9, 10, 12.
// By convention, 1 is included.
// Given a number n, print the n'th Ugly number.

// Sample Test Case
// Input: n = 15
// Output: 24

// Input: n = 150
// Output: 5832

// Brute Force
// 1) Generate all the ugly numbers.
// 2) Sort the distinct ugly numbers.
// 3) Print the n'th ugly number.

// The DP Approach
// keep 3 pointers, think of it as merging three sorted lists.
// Assume you have U(k), the k'th ugly number.
// Then U(k+1) must be Min(p1 * 2, p2 * 3,p3 * 5).
// Where p1, p2, p3 will be already generated numbers

// First 10 ugly number: 1, 2, 3, 4, 5, 6, 8, 9, 10, 12
// next potential ugly numbers would be the smallest multiples of already calculated numbers.
// Next potential ugly numbers: 15, 16, 20

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 10;
    int c2(0), c3(0), c5(0);
    vector<int> dp(n + 1);
    dp[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        dp[i] = min({2 * dp[c2], 3 * dp[c3], 5 * dp[c5]});
        if (2 * dp[c2] == dp[i])
            c2++;
        if (3 * dp[c3] == dp[i])
            c3++;
        if (5 * dp[c5] == dp[i])
            c5++;
    }
    cout << dp[n - 1];
    return 0;
}