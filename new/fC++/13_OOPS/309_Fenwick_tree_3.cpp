// Count Inversion - Fenwick Tree
// Problem: Count the inversions in the array.
// Two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j
// [3, 5, 6, 9, 1, 2, 7, 8]
// Inversion: 10
// Explanation: (3, 1), (3, 2), (5, 1), (5, 2), (6, 1), (6, 2), (9, 1), (9, 2), (9, 7), (9, 8)

// Using BIT: IDEA: Traverse through the array and for every index find the number of smaller elements on its right side of the array
// Sum up the counts for all indexes in the array and print the sum.

#include <bits/stdc++.h>
using namespace std;
vector<int> bit;
int getSum(int idx)
{
    int sum = 0;
    while (idx > 0)
    {
        sum += bit[idx];
        idx -= idx & (-idx);
    }
    return sum;
}

void update(int n, int idx, int inc)
{
    while (idx <= n)
    {
        bit[idx] += inc;
        idx += idx & (-idx);
    }
}

int32_t main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    vector<int> temp = a;
    sort(temp.begin(), temp.end());
    for (int i = 0; i < n; i++)
    {
        a[i] = lower_bound(temp.begin(), temp.end(), a[i]) - temp.begin() + 1;
    }
    bit = vector<int>(n + 1);
    int inv = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        inv += getSum(a[i] - 1);
        update(n, a[i], 1);
    }
    cout << inv;
}