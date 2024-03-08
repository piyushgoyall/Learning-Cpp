// Nested Segments (Codeforces)
// Problem: Given an array of 2n numbers, each number from 1 to n in it and occurs exactly twice.
// We can say that the segment y is nested inside the segment x if both occurences of number x.
// Find for each segment i, how many segments are there that are nested inside it.
// Constraints - 1 <= n <= 10^5
// Example - n = 5
// [5, 1, 2, 2, 3, 1, 3, 4, 5, 4]
//  0  1  2  3  4  5  6  7  8  9

// [1] -> 1 {2}
// [2] -> 0
// [3] -> 0
// [4] -> 0
// [5] -> 3 {1, 2, 3}

// Make the intervals out of the given array.
// 1 - [1, 5]
// 2 - [2, 3]
// 3 - [4, 6]
// 4 - [7, 9]
// 5 - [0, 8]
// Our problem reduces to finding for each segment, the number of segments lying completely inside it.

// Approach
// Slight modification in 'present sir' approach.
// 1) Sort all the interval in increasing order of 'r' values.
// -> {[2, 3], [1, 5], [4, 6], [0, 8], [7, 9]}
// 2) Start from the left and after calculating ans for each interval, mark the 'I' on the number line as present.
// 3) When [1, 5] comes, we need to find the number of 'present sir' on the number line from [1, 5]
// 4) Similarly for [4, 6], [0, 8] and [7, 9].
// Keep updating the query's response in the answer array.

#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 2, MOD = 1e9 + 7;

struct triplet
{
    int l, r, idx;
};

int tree[4 * N];

int query(int node, int st, int en, int l, int r)
{
    if (st > r || en < l)
    {
        return 0;
    }

    if (l <= st && en <= r)
        return tree[node];

    int mid = (st + en) / 2;
    int q1 = query(2 * node, st, mid, l, r);
    int q2 = query(2 * node + 1, mid + 1, en, l, r);

    return q1 + q2;
}

void update(int node, int st, int en, int idx, int val)
{
    if (st == en)
    {
        tree[node] = val;
        return;
    }

    int mid = (st + en) / 2;
    if (idx <= mid)
    {
        update(2 * node, st, mid, idx, val);
    }
    else
    {
        update(2 * node + 1, mid + 1, en, idx, val);
    }

    tree[node] = tree[2 * node] + tree[2 * node + 1];
}

bool compare(triplet t1, triplet t2)
{
    return t1.r < t2.r;
}

signed main()
{
    int n;
    cin >> n;
    triplet t1;
    t1.l = t1.r = -1;
    vector<triplet> t(n, t1);

    int x;
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> x;
        if (t[x - 1].l == -1)
        {
            t[x - 1].l = i;
        }
        else
        {
            t[x - 1].r = i;
        }
        t[x - 1].idx = x;
    }

    sort(t.begin(), t.end(), compare);
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        ans[t[i].idx - 1] = query(1, 0, 2 * n - 1, t[i].l, t[i].r);
        update(1, 0, 2 * n - 1, t[i].l, 1);
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}