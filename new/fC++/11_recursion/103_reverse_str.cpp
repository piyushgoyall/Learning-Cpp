// Reverse a string using recursion.

#include <bits/stdc++.h>
using namespace std;
void rev(string s)
{
    if (s.length() == 0)
    {
        return;
    }
    string ros = s.substr(1);
    rev(ros);
    cout << s[0];
}
int main()
{
    string s;
    cin >> s;
    rev(s);
    return 0;
}