// Move all x to the end of the string.

#include <bits/stdc++.h>
using namespace std;
string movex(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    char ch = s[0];
    string ans = movex(s.substr(1));
    if (ch == 'x')
    {
        return ans + ch;
    }
    return ch + ans;
}
int main()
{
    string s;
    cin >> s;
    cout << movex(s);
    return 0;
}

// Practice

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     getline(cin, s);
//     string temp = "";
//     int num = 0;
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s[i] != 'x')
//         {
//             temp += s[i];
//         }
//         else
//         {
//             num += 1;
//         }
//     }
//     for (int i = 0; i < num; i++)
//     {
//         temp += 'x';
//     }
//     cout << temp;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     getline(cin, s);
//     string temp1 = "";
//     string temp2 = "";
//     // int num = 0;
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s[i] != 'x')
//         {
//             temp1 += s[i];
//         }
//         else
//         {
//             temp2 += 'x';
//         }
//     }
//     // for (int i = 0; i < num; i++)
//     // {
//     //     temp += 'x';
//     // }
//     cout << temp1 + temp2;
//     return 0;
// }