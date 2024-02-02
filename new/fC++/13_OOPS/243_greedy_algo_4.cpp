// Optimal Merge Pattern
// Problem: You are given n files with their computation times in an array.
// Operation: Choose/take any two files, add their computation time and append it to the list of computation times. {Cost = Sum of computation time}
//            Do this until we are left with only one file in the array. We have to do this operationsuch that we get minimum cost finally.
// Approach:
// 1) Push all elements to a minheap. (sort)
// 2) Take top 2 elements one by one and add the cost to the answer. Push the merged file to the minheap.
// 3) When single element remains, output the cost.
// Dry run: [2,4,5,7]  Total Cost = 6 + 11 + 18 = 35 {Minimum}
//           |_| | |
//            6  | |
//            |__| |
//             11  |
//              |__|
//               18

#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    priority_queue<int, vector<int>, greater<int>> minheap;
    for (int i = 0; i < n; i++)
    {
        minheap.push(a[i]);
    }

    int ans = 0;

    while (minheap.size() > 1)
    {
        int e1 = minheap.top();
        minheap.pop();
        int e2 = minheap.top();
        minheap.pop();

        ans += e1 + e2;
        minheap.push(e1 + e2);
    }
    cout << ans << endl;
    return 0;
}