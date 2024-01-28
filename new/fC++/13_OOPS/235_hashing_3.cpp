// Hashing - count frequency of elements in a given array
// Ex: [2,2,2,1,1,4,3,4]
// We need to maintain frequency of each element.
// For ex:  Key(elements)     Value(Frequency)
//              2       ------>       3
//              1       ------>       2
//              4       ------>       2
//              3       ------>       1

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
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    unordered_map<int, int> freq;
    rep(i, 0, n)
    {
        freq[a[i]]++;
    }

    unordered_map<int, int>::iterator it;
    for (it = freq.begin(); it != freq.end(); it++)
    {
        cout << it->ff << " " << it->ss << endl;
    }
}