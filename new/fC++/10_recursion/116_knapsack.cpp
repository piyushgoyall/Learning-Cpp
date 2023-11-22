// 0 - 1 Knapsack Problem
// Put n items with given weight and value in a kanpsack of capacity W to get the maximmum total value in the knapsack.

#include <bits/stdc++.h>
using namespace std;

int knapsack(int value[], int wt[], int n, int W)
{
    if (n == 0 || W == 0)
    {
        return 0;
    }

    if (wt[n - 1] > W)
    {
        return knapsack(value, wt, n - 1, W);
    }
    return max(knapsack(value, wt, n - 1, W - wt[n - 1]) + value[n - 1], knapsack(value, wt, n - 1, W));
}

int main()
{
    int n;
    cout << "Enter number of items: ";
    cin >> n;

    int wt[n], value[n];
    cout << "Enter weigth of " << n << " items: ";
    for (int i = 0; i < n; i++)
    {
        cin >> wt[i];
    }

    cout << "Enter value of " << n << " items: ";
    for (int i = 0; i < n; i++)
    {
        cin >> value[i];
    }

    int W;
    cout << "Enter weight: ";
    cin >> W;
    cout << knapsack(value, wt, 3, W) << endl;
    return 0;
}