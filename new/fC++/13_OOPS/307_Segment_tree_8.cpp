// Fenwick Tree - Binary Index Tree
// Problem: Given an array , fins the sum of array[L,R]
// Ex: Array = [1, 0, 2, 3, 10]
// Sum(2, 3) = 5
// Sum(0, 4) = 16

// Point and Range Updates
// Range Sum with Point Updates
// - Given an array A and Q queries. There are two types of queries,
// 1) L R, Print the sum of Array[L .. R]
// 2) idx val, Update A[idx] to val

#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> bit;

void update(int idx, int val)
{
    while (idx <= n)
    {
        bit[idx] += val;
        idx += idx & (-idx);
    }
}

int query(int idx)
{
    int ans = 0;
    while (idx > 0)
    {
        ans += bit[idx];
        idx -= idx & (-idx);
    }
    return ans;
}

int32_t main()
{
    cin >> n;
    bit = vector<int>(n + 1);
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        update(i, a[i]);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int c;
        cin >> c;
        if (c == 1)
        {
            int l, r;
            cin >> l >> r;
            int ans = query(r) - query(l - 1);
            cout << ans << "\n";
        }
        else if (c == 2)
        {
            int index, val;
            cin >> index >> val;
            update(index, -a[index]);
            a[index] = val;
            update(index, val);
        }
    }
}