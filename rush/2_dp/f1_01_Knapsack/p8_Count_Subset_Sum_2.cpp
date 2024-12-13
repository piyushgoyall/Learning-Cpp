// Count the number of subset with a given difference

// SAME CODE WILL WORK FOR THE BELOW PROBLEM

// Problem Statement : TARGET SUM PROBLEM
// Given an array of integers nums and a target integer target,
// your task is to determine the number of ways to assign a + or -sign to each element in nums such that the resulting sum equals target

#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &arr, int n, int target)
{
    int dp[n + 1][target + 1];
    for (int i = 0; i <= target; i++)
        dp[0][i] = 0;

    for (int i = 0; i <= n; i++)
        dp[i][0] = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= target; j++)
        {
            if (arr[i - 1] <= j)
                dp[i][j] = dp[i - 1][j - arr[i - 1]] + dp[i - 1][j];
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    return dp[n][target];
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        total += arr[i];
    }

    int diff;
    cin >> diff;

    if ((total - diff) % 2 != 0)
    {
        cout << "No such subset!!";
        return 0;
    }

    int target = (total - diff) / 2;

    cout << solve(arr, n, target);

    return 0;
}