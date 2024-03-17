// Heap - Smallest Subsequence with sum k.
// Ex. Given an array [1,1,3,2,8] & k = 12
// Subarray: Continuous Block Of Elements.
// Ex. {3,2} {1,3,2,8} {8}
// Subsequence: Not necessarily continuous, but order should remain as in original array
// Ex. {3,8} {1,2,8} {3,2,8}
// "Every subarray is subsequence but not vice versa"
// Possible subsequences which satisfy the condition that sum >= k
// {1,1,3,2,8} {1,3,2,8} {1,3,2,8} {1,3,8} {1,3,8} {3,2,8}
// Subsequences with min. length are {1,3,8} {1,3,8} {3,2,8}
// Ans = 3
// APPROACH : 1) Keep a maxheap and insert all the elements [8,3,2,1,1]
//            2) Keep popping the elements and keep adding them to a variable sum and maintain cnt.
//            3) When sum >= k, then quote the answer(cnt).

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
    {
        cin >> a[i];
    }

    priority_queue<int, vi> pq;

    rep(i, 0, n)
    {
        pq.push(a[i]);
    }

    int sum = 0;
    int cnt = 0;

    while (!pq.empty())
    {
        sum += pq.top();
        pq.pop();

        cnt++;

        if (sum >= k)
        {
            break;
        }
    }

    if (sum < k)
    {
        cout << "-1" << endl;
    }

    else
    {
        cout << cnt << endl;
    }

    return 0;
}
