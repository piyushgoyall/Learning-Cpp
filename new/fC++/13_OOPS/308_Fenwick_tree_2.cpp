// Range Updates using Fenwick Tree
// (SPOJ UpdateIT)
// You have an array containing n elements initially all 0. You need to do a number of queries on it.
// Find u queries are of the type:
//  "L R val", Add 'val' to A[L], A[L+1] .. A[R]
// Next q queries are of the type
//  "Idx", Get the value stored at ondex idx.

#include <bits/stdc++.h>
using namespace std;

int query(int i, int bit[], int n)
{
    int ans = 0;
    while (i > 0)
    {
        ans += bit[i];
        i -= i & (-i);
    }
    return ans;
}

void update(int i, int inc, int bit[], int n)
{
    while (i <= n)
    {
        bit[i] += inc;
        i += i & (-i);
    }
}

int32_t main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int bit[n + 10] = {0};
        int u;
        cin >> u;
        while (u--)
        {
            int l, r, inc;
            cin >> l >> r >> inc;
            l++, r++;
            update(l, inc, bit, n); // A[L ..] + inc
            update(r + 1, -inc, bit, n);
            // A[L .. R] + inc
        }
        int q;
        cin >> q;
        while (q--)
        {
            int w;
            cin >> w;
            w++;
            cout << query(w, bit, n) << "\n";
        }
    }
}