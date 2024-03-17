// HEAPS - Merge k sorted arrays
// Ex.: We have 3 sorted arrays:
// 1) [1,4,7]
// 2) [3,5]
// 3) [2,6,7]
// Final result: [1,2,3,4,5,6,7,7]
// Brute force : 1) Take 2 arrays and merge them, repeat this processuntil we are left with one array {We have done merge two sorted arrays in merge sort....}
// Efficient Solution {Using Heaps}
// 1) Create a mini heap of pairs. (Pair --> {value,array number})
// 2) Insert {first element, array Number} of all the sorted Array into MinHeap.
// 3) Main Idea : We will pop element from the MinHeap and store into the answer Array. Insert the next element of the Sorted Array into the MinHeap.
// 4) We also need to keep track of the indices of the elements

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
    int k;
    cin >> k;

    vector<vector<int>> a(k);

    rep(i, 0, k)
    {
        int size;
        cin >> size;

        a[i] = vector<int>(size);
        rep(j, 0, size)
        {
            cin >> a[i][j];
        }
    }

    vector<int> idx(k, 0);
    priority_queue<pii, vector<pii>, greater<pii>> pq;

    rep(i, 0, k)
    {
        pq.push({a[i][0], i});
    }

    vi ans;
    while (!pq.empty())
    {
        pii x = pq.top();
        pq.pop();

        ans.push_back(x.ff);

        if (idx[x.ss] + 1 < a[x.ss].size())
        {
            pq.push({a[x.ss][idx[x.ss] + 1], x.ss});
        }
        idx[x.ss] += 1;
    }
    rep(i, 0, ans.size())
    {
        cout << ans[i] << endl;
    }
    cout << endl;
}
