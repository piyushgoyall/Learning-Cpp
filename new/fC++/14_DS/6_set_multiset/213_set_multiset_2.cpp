// SET
// Code - CUSTOM COMPARATOR

#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int, greater<int>> s;
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    // printing the element in the set
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << "\n";
    return 0;
}