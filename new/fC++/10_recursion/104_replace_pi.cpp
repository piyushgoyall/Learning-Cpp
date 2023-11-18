#include <bits/stdc++.h>
using namespace std;
void replacepi(string s)
{
    if (s.length() == 0)
    {
        return;
    }
    if (s[0] == 'p' && s[1] == 'i')
    {
        cout << "3.14";
        replacepi(s.substr(2));
    }
    else
    {
        cout << s[0];
        replacepi(s.substr(1));
    }
}
int main()
{
    string s;
    cin >> s;
    replacepi(s);
    return 0;
}

// PRACTICE

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     cin >> s;
//     string temp = "";
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (i + 1 < s.length() && s[i] == 'p' && s[i + 1] == 'i')
//         {
//             temp += "3.14";
//             i++;
//         }
//         // else if (s[i] == 'i' && s[i - 1] == 'p')
//         // {
//         //     continue;
//         // }
//         else
//         {
//             temp += s[i];
//         }
//     }
//     cout << temp;
//     return 0;
// }