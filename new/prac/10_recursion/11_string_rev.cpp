#include <bits/stdc++.h>
using namespace std;

void strRev(string &s, int i, int j)
{
    if (i >= j)
        return;

    swap(s[i], s[j]);
    // i++;
    // j--;
    strRev(s, i + 1, j - 1);
}

int main()
{
    string s;
    cin >> s;

    strRev(s, 0, s.size() - 1);

    cout << s;
    return 0;
}