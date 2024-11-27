// Generate all Balanced Parentheses

#include <bits/stdc++.h>
using namespace std;

void solve(string output, int open, int close)
{
    if (open == 0 && close == 0)
    {
        cout << output << " ";
        return;
    }

    if (open != 0)
    {
        string s1 = output;
        s1.push_back('(');
        solve(s1, open - 1, close);
    }

    if (close > open)
    {
        string s2 = output;
        s2.push_back(')');
        solve(s2, open, close - 1);
    }
}

int main()
{
    int n;
    cin >> n;

    solve("", n, n);
    return 0;
}