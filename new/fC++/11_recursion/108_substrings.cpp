// Generate all substrigns of a string.(subsequence)

#include <bits/stdc++.h>
using namespace std;
void subseq(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch = s[0];
    string ros = s.substr(1);
    subseq(ros, ans);
    subseq(ros, ans + ch);
}

int main()
{
    string s;
    cin >> s;
    subseq(s, "");
    cout << endl;
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     getline(cin, s);
//     for (int i = 0; i < s.length(); i++)
//     {
//         for (int j = i; j < s.length(); j++)
//         {
//             for (int k = i; k <= j; k++)
//             {
//                 cout << s[k] << " ";
//             }
//             cout << endl;
//         }
//     }
//     return 0;
// }