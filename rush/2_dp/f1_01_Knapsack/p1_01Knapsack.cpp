#include <bits/stdc++.h>
using namespace std;

int knapsack(int *weight, int *value, int capacity, int n)
{
    if (n == 0 || capacity == 0)
        return 0;

    if (weight[n - 1] <= capacity)
    {
        return max(value[n - 1] + (knapsack(weight, value, capacity - weight[n - 1], n - 1)), (knapsack(weight, value, capacity, n - 1)));
    }

    else
        return knapsack(weight, value, capacity, n - 1);
}

int main()
{
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