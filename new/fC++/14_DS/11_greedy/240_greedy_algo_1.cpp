// General things to remember in Greedy Technique
// Generally, sorting is done while applying greedy technique.
// Sometimes we do not realize that we are applying greedy because it comes from inside.

// Indian Coin Change Problem - Greedy Algorithm
// Problem: You are given an array of Denominations and a value X. You need to find the minimum number of coins required to make value of X.
// NOTE: We have infinite supply of each coin.
// Ex: [1,2,5,10,20,50,100,200,500,2000]
//     X = 388
//     388 = 200 + 100 + 50 + 20 + 10 + 5 + 2 + 1

// Approach : 1) Start from the largest value, till we can include it, take it.
//            2) Else move on the smaller value.

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

signed main()
{
    int n;
    cin >> n;

    vi a(n);

    rep(i, 0, n)
            cin >>
        a[i];

    int x;
    cin >> x;

    sort(a.begin(), a.end(), greater<int>());
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans += x / a[i];
        x -= x / a[i] * a[i];
    }

    cout << ans << endl;
    return 0;
}