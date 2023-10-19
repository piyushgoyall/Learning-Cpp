#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << s << endl;
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string str;
//     getline(cin, str);

//     // CONVERT INTO UPPERCCASE

//     for (int i = 0; i < str.length(); i++)
//     {
//         if (str[i] >= 'a' && str[i] <= 'z')
//             str[i] -= 32;
//     }
//     cout << str;
//     return 0;
// }