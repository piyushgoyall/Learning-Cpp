// Policy Based Data Structures
// - Ordered Set
// - Based on Red Black Trees
// - Included in
//      #include<ext/pb_ds/assoc_container.hpp>
//      #include<ext/pb_ds/tree_policy.hpp>
//      using namespace __gnu_pbds;

// Question:
// Given q queries, of 3 types
// 1) Insert a number X into the set
// 2) Print the k'th element
// 3) Print the number of elements less than k

#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <class T>
using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int32_t main()
{
    int q;
    cin >> q;
    oset<int> s;
    while (q--)
    {
        int c;
        cin >> c;
        if (c == 1)
        {
            int t;
            cin >> t;
            s.insert(t);
        }
        else if (c == 2)
        {
            int t;
            cin >> t;
            cout << *s.find_by_order(t) << "\n";
        }
        else
        {
            int t;
            cin >> t;
            cout << s.order_of_key(t) << "\n";
        }
    }
}