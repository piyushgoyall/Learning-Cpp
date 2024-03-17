// Hashing - Count number of subarrays with sum zero
// Given an array: [1,-1,1,-1]
// Brute force approach: Go over all the subarray's and compute sum (Time Complexity: O(n^2))
// Optimized approach: 1) Compute Prefix Sum                Given an Array: [1,-1,1,-1]
//                     Prefix Sum = [1,0,1,0]               i = 1
//                                                          1 + (-1) = 0
//                                                          1 + (-1) + 1 = 1
// Main Idea:                                               1 + (-1) + 1 + (-1) = 0
// So, we have to :
// 1) Map prefix sum to a map.
// 2) For every key, choose 2 values from all the occurrences of particular prefsum("MC2)
// 3) Special Case: for prefsum 0, we have to also include them.

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

    map<int, int> cnt;
    int prefSum = 0;

    rep(i, 0, n)
    {
        prefSum += a[i];
        cnt[prefSum]++;
    }

    int ans = 0;
    map<int, int>::iterator it;

    for (it = cnt.begin(); it != cnt.end(); it++)
    {
        int c = it->ss;
        ans += (c * (c - 1)) / 2;

        if (it->ff == 0)
        {
            ans += it->ss;
        }
    }
    cout << ans << endl;
    return 0;
}