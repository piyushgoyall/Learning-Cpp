// MULTI SET
// - Can contain duplicates
// - Implemented using balanced BST
// - Elements are in sorted order
// - Random access is not possible , i.e. you can not get i'th element in O(1)/O(Log N)
// - Present in #include<set> header file

// TIME COMPLEXITIES
// - Insertion: O(Log N)
// - Deletion: O(Log N)
// - Lower/Upper_Bound: O(Log N)

// CODE - MULTISET

#include <bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> s;
    s.insert(1);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(5);
    for (auto i : s)
        cout << i << " ";
    cout << "\n";

    s.erase(3);

    // s.erase(s.find(3));  // TO delete a single repeted value

    for (auto i : s)
        cout << i << " ";

    return 0;
}