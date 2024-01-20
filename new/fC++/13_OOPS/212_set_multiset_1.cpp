// Set are of two types: Orderes Set and Unordered Set
// Ordered Set: - Contains unique elements
//              - Implemented using balances BST
//              - Elements are in sorted order
//              - Random access is not possible, i.e. you can not get i'th element in O(1)/O(Log N)
//              - Present in #include <set> header file

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // set<int> s;
    // s.insert(1);
    // s.insert(2);
    // s.insert(2);
    // s.insert(3);
    // // printing the element in the set
    // for (auto i : s)
    // {
    //     cout << i << " ";
    // }
    // cout << "\n";
    // for (auto i = s.begin(); i != s.end(); i++)
    // {
    //     cout << *i << " ";
    // }
    // cout << "\n";

// TO PRINT THE SET IN REVERSE
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    // print in reverse
    for (auto i = s.rbegin(); i != s.rend(); i++)
    {
        cout << *i << " ";
    }
    cout << "\n";
    // Size of the set
    cout << s.size();
    return 0;
}