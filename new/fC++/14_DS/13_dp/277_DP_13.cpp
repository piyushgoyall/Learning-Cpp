// O - N Knapsack
// Problem: Given a array of items with their weight and value. Find the maximum value of items that can be stolen using a knapsack of capacity W.
// Note: You can choose infinite items of each type.
// Sample Test Case:
// Input:
// n = 5, W = 11
// wt[] = {3,2,4,5,1}
// val[] = {4,3,5,6,1}
// Output: 16
// We can take second item 5 times, weight = 2*5, val = 3*5
// fifth item one time            , weight = 1  , val = 1
//                                        Total value = 16

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5, W = 11;
    vector<int> wt = {3, 2, 4, 5, 1};
    vector<int> val = {4, 3, 5, 6, 1};
    vector<int> dp(W + 1, 0);
    for (int j = 0; j <= W; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (j - wt[i] >= 0)
                dp[j] = max(dp[j], val[i] + dp[j - wt[i]]);
        }
    }
    cout << dp[W];
    return 0;
}