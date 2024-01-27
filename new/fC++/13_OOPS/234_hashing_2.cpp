// Hasing STL
// STANDARD TEMPLATE LIBRARY

//    MAPS                    |      UNORDERD MAPS
// Insertion : O(log(n))      | O(1) {on average}
// Accessing : O(log(n))      | O(1)
// Implemented : Red - Black  | Hash Tables (basically array of buckets)
// using         trees        |
//                            |
//          key  value        |                      key  value
//     map <int, int> mp;     |       unordered_map <int, int> ump;
//

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
    map<int, int> m;
    m[8] = 2;
    cout << m[8];
    return 0;
}