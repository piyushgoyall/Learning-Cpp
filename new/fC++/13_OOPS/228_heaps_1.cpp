// HEAPS: Heaps are binary tree based data structure but they are not necessarily balanced binary search tree
// Two types of heap : Max Heap & Min Heap
// Max Heap: Root > rest of the elements present in its subtree (This is valid for all subtrees also)
/*         6
          / \
         5   4
        / \
       1   2
*/

// Min Heap: Root < rest of the elements present in its subtree
/*         1
          / \
         3   2
        / \
       9   8
*/

// HOW TO MAKE BINARY TREE
// Take an index so its left child is 2*index + 1 and right child 2*index + 2

// HEAPSORT

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
// #define int long long

#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

void heapify(vi &a, int n, int i)
{
    int maxIdx = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && a[l] > a[maxIdx])
    {
        maxIdx = l;
    }
    if (r < n && a[r] > a[maxIdx])
    {
        maxIdx = r;
    }
    if (maxIdx != i)
    {
        swap(a[i], a[maxIdx]);
        heapify(a, n, maxIdx);
    }
}

void heapsort(vi &a)
{
    int n = a.size();
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(a, n, i);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        swap(a[0], a[i]);
        heapify(a, i, 0);
    }
}

signed main()
{
    int n;
    cin >> n;

    vi a(n);
    rep(i, 0, n)
        cin >> a[i];

    heapsort(a);

    rep(i, 0, n)
    {
        cout << a[i] << " ";
    }
}