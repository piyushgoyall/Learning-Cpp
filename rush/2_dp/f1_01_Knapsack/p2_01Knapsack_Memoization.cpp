#include <bits/stdc++.h>
using namespace std;

int static dp[102][102];

int knapsack(int *weight, int *value, int capacity, int n)
{
    if (n == 0 || capacity == 0)
        return 0;

    if (dp[n][capacity] != -1)
    {
        return dp[n][capacity];
    }

    if (weight[n - 1] <= capacity)
    {
        dp[n][capacity] = max(value[n - 1] + (knapsack(weight, value, capacity - weight[n - 1], n - 1)), (knapsack(weight, value, capacity, n - 1)));
        return dp[n][capacity];
    }

    else
    {
        dp[n][capacity] = knapsack(weight, value, capacity, n - 1);
        return dp[n][capacity];
    }
}

int main()
{
    memset(dp, -1, sizeof(dp));

    int n;
    cin >> n;

    int weight[n];
    int value[n];
    for (int i = 0; i < n; i++)
    {
        int w, v;
        cin >> w >> v;

        weight[i] = w;
        value[i] = v;
    }

    int capacity;
    cin >> capacity;

    cout << knapsack(weight, value, capacity, n);

    return 0;
}