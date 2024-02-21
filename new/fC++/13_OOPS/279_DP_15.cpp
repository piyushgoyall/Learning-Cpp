// Maximum Length of Bitonic Subsequence
// Problem: Given an array of n numbers. Find the maximum length of bitonic subsequence.
// A subsequence is bitonic if it is first strictly increasing and then stricty decreasing or entirely increasing or decreasing.
// Sample Test Case
// Input:
// 8
// 1 11 2 10 4 5 2 1
// Output: 6
// Explanation: Maximum length = 1, 2, 4, 5, 2, 1
// Constraints
// 1 <= n <= 1000
// |Ai| <= 10000
// Thought
// You know longest increasing subsequence
// Code Longest Decreasing Subsequence from element 'i' to n-1
// At element i,
// 1) You have length of increasing subsequence from 0. (forward)
// 2) You have length of decreasing subsequence from i to n-1. (backword)
// Bitonic subsequence = forward[i] + backward[i] - 1

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 8;
    vector<int> a = {1, 11, 2, 10, 4, 5, 2, 1};
    vector<int> forward(n, 1), backward(n, 1);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[i] > a[j])
                forward[i] = max(forward[i], 1 + forward[j]);
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (a[i] > a[j])
            {
                backward[i] = max(backward[i], 1 + backward[j]);
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, forward[i] + backward[i] - 1);
    }
    cout << ans << endl;
    return 0;
}
