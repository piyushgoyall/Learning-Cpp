// Fractional Knapsack - Greedy Algorithm
// We are given 'n' items with {weight, value} of each item and the capacity of knapsack (Sack) 'W'.
// We need to put these items in knapsack such that final value of items in knapsack is maximum.

// For ex: 5 items
// Value(rs.)  | 21 | 24 | 12 | 40 | 30
// Weight(kg.) | 7  | 4  | 6  | 5  | 6
// W = 20 kg

// SOL.
// Value(rs.)   | 21 | 24 | 12 | 40 | 30
// Weight(kg.)  |  7 |  4 |  6 |  5 |  6
// Value/Weight |  3 |  6 |  2 |  8 |  5

// -> Sort in decreasing order according to value/weight
// Value(rs.)   | 40 | 24 | 30 | 21 | 12
// Weight(kg.)  |  5 |  4 |  6 |  7 |  6
// Value/Weight |  8 |  6 |  5 |  3 |  2

// -> Pick from the starting till our knapsack has capacity.
// Value(rs.)   | 40 | 24 | 30 | 21 | 12
// Weight(kg.)  |  5 |  4 |  6 |  7 |  6
// Value/Weight |  8 |  6 |  5 |  3 |  2  Here select 5 kg of 1st, then 4 kg of 2nd, 6 kg of 3rd and 5 kg of 4th
//              Maximum Value = 40 + 24 + 30 + 15

#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <map>
#include <unordered_map>
#include <queue>
#include <stack>
#include <string>
using namespace std;

// #define int long long

#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define setBits(x) __builtin_popcount(x)

bool compare(pii p1, pii p2)
{
    double v1 = (double)p1.ff / p1.ss;
    double v2 = (double)p2.ff / p2.ss;

    return v1 > v2;
}

signed main()
{
    int n;
    cin >> n;

    vii a(n);

    rep(i, 0, n)
    {
        cin >> a[i].ff >> a[i].ss;
    }

    int w;
    cin >> w;

    sort(a.begin(), a.end(), compare);

    int ans = 0;
    rep(i, 0, n)
    {
        if (w >= a[i].ss)
        {
            ans += a[i].ff;
            w -= a[i].ss;
            continue;
        }
        double vw = (double)a[i].ff / a[i].ss;
        ans += vw * w;
        w = 0;
        break;
    }
    cout << ans << endl;
    return 0;
}