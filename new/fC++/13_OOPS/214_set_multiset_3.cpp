// SET
// Code - Lower/Upper_bound()

#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    s.insert(1);
    s.insert(3);
    s.insert(5);

    cout << *s.lower_bound(1) << " ";
    cout << *s.lower_bound(3) << " ";
    cout << *s.upper_bound(3) << " ";
    cout << (s.upper_bound(5) == s.end()) << " ";
    return 0;
}