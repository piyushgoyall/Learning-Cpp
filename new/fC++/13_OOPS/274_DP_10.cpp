// Optimal Game Stratergy
// Problem: Rahul and Neha are playing a coin game. They are given n coins with values X1, X2.... Xn where 'n' is always even.
// They take alternate turns. In each turn, a player picks either the first coin or the last coin from the row and removes it from the row.
// The value of coin is received by that player. Determine the maximum value that Rahul can win if he moves first. Both the players play optimally.
// Ex: Input: 4
//            1 2 3 4
// Output: 6
// Explanation: Rahul takes 4, Neha take 3, Rahul takes 3, Neha takes 1
//              Total coins Rahul can get is 6.
// IDEA
// 1) Minimax Concept
// 2) What choice will you make?
// 3) What choice will the opponent make?

// DP Recurrence
// For a given arrangement of coins A[i..j]
// We have two choices,
// 1) We can choose A[i]
// 2) We can choose A[j]
// In each case, our opponent will also have two choices.
// She will try to maximise her score and minimise ours.
// Therefore our sub problem will reduce to
// Choice1 = a[i] + min(solve(i+2,j), solve(i+1,j-1));
// Choice2 = a[j] + min(solve(i,j-2), solve(i+1,j-1));

#include <bits/stdc++.h>
using namespace std;
vector<int> a;
int dp[100][100];

int solve(int i,int j)
{
    if(i==j)
        return a[i];
    
    if(i>j)
        return 0;
    
    if(dp[i][j] != -1)
        return dp[i][j];

    int l = a[i] + min(solve(i+2,j), solve(i+1,j-1));
    // A[i .. j], rem coins = A[i+1 .. j]
    int r = a[j] + min(solve(i,j-2),solve(i+1,j-1));
    // A[i..j], rem coins = A[i,,j-1]
    return dp[i][j] =  max(l,r);
}

int main()
{
    memset(dp,-1,sizeof(dp));
    int n;
    cin >> n;
    a = vector<int>(n);
    for (auto &i : a)
        cin >> i;
    cout << solve(0, n - 1);
    return 0;
}