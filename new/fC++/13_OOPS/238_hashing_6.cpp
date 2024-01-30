// Hashing - Sliding Window Technique
// Problem : You are given an array with n elements, calculate the minimum sum of k,consecutive elements.
// Ex. :            [-2, 10, 1, 3, 2, -1, 4, 5]  k = 3
//                    0   1  2  3  4   5  6  7
// Various sums:      9, 14, 6, 4, 5, 8
//                     Ans = 4 (minimum element)
// Brute force: 1) Iterate from i = 0 to i = n - k - 1 in outer loop.
//              2) Starting from every j = i compute sum of k elements and maintain the minimum.
// Time Complexity: O(n x k)
// Opitmal Solution(sliding Window)
// 1) Compute sum of the first k elements (i = 0 to k)
// 2) While increasing i, subtract a[i - 1] and add a[i + k - 1] in the previous sum, which will become current sum.
// Dry Run [-2, 10, 1, 3, 2, -1, 4, 5]
//         i = 0, Sum  = 9
//         [-2, 10, 1, 3, 2, -1, 4, 5]
//         i = 1, Sum = 9-(-2) + 3 = 14
// 3) Do the above process till i = 5 and maintain the minimum.
// Time Complexity: O(n) which is much better

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
    int n, k;
    cin >> n >> k;

    vi a(n);

    rep(i, 0, n)
            cin >>
        a[i];
    int s = 0, ans = INT_MAX;
    rep(i, 0, k)
    {
        s += a[i];
    }
    cout << s << " ";
    ans = min(ans, s);

    // sliding window
    rep(i, 1, n - k + 1)
    {
        s -= a[i - 1];
        s += a[i + k - 1];
        ans = min(ans, s);
        cout << s << " ";
    }
    cout << endl;
    cout << ans << endl;
    return 0;
}