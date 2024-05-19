// Solve without j

#include <bits/stdc++.h>
using namespace std;

bool chkPalin(string &s, int st)
{
    if (st > s.length() - 1 - st)
        return true;

    if (s[st] != s[(s.length()) - st - 1])
        return false;

    else
        return chkPalin(s, st + 1);
}

int main()
{
    string s;
    cin >> s;

    bool isPalin = chkPalin(s, 0);
    if (isPalin)
        cout << "Palindrome" << endl;

    else
        cout << "Not a Palindrome";

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// bool chkPalin(string str, int i, int j)
// {
//     if (i > j)
//         return true;
//     if (str[i] != str[j])
//         return false;

//     else
//         return chkPalin(str, i + 1, j - 1);
// }

// int main()
// {
//     string s;
//     cin >> s;

//     bool isPlain = chkPalin(s, 0, s.length() - 1);

//     if (isPlain)
//     {
//         cout << "Palindrome." << endl;
//     }
//     else
//     {
//         cout << "Not a plaindrome." << endl;
//     }
//     return 0;
// }