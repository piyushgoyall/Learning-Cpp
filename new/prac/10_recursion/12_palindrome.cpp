#include <bits/stdc++.h>
using namespace std;
bool chkPalin(string str, int i, int j)
{
    if (i > j)
        return true;
    if (str[i] != str[j])
        return false;

    else
        return chkPalin(str, i + 1, j - 1);
}

int main()
{
    string s;
    cin >> s;

    bool isPlain = chkPalin(s, 0, s.length() - 1);

    if (isPlain)
    {
        cout << "Palindrome." << endl;
    }
    else
    {
        cout << "Not a plaindrome." << endl;
    }
    return 0;
}