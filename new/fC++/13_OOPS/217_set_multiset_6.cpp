// UNORDERED SET
// - Contains unique elements
// - Implemented using Hashing
// - Elements are not in sorted order
// - Random access is not possible, i.e. you cannot get i'th element in O(1)
// - Present in #include<unordered_set> header file

// ADVANTAGE: TIME COMPLEXITIES
//           - Insertion: O(1) is avg case, O(N) in worst case
//           - Deletion: O(1) in avg case, O(N) in worst case
//           - Lower/Upper_Bound: NA

// Code - UNORDERED SET

#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int> s;
    s.insert(1);
    s.insert(3);
    
    s.insert(2);
    s.insert(5);

    for (auto i : s)
        cout << i << " ";
    cout << "\n";

    s.erase(2);
    s.erase(s.begin());

    for (auto i : s)
        cout << i << " ";
    cout << "\n";

    return 0;
}