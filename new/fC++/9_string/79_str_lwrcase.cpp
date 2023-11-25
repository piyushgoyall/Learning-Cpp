#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s << endl;
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string str;
//     getline(cin, str);

//     // CONVERT INTO LOWERCCASE

//     for (int i = 0; i < str.length(); i++)
//     {
//         if (str[i] >= 'A' && str[i] <= 'Z')
//             str[i] += 32;
//     }
//     cout << str;
//     return 0;
// }