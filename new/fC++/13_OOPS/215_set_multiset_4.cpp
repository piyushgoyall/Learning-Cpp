// SET
// Code - Erase

#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(5);

    for (auto i : s)
        cout << i << " ";
    cout << "\n";

    cout << s.size() << "\n";
    s.erase(2);

    for (auto i : s)
        cout << i << " ";
    cout << "\n";
    return 0;
}