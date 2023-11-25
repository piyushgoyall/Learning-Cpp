// Input a numeric string and print the largest number possible.

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     cin >> s;
//     sort(s.begin(), s.end(), greater<int>());
//     cout << s;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string temp;
    for (int i = 0; i < s.length() - 1; i++)
    {
        for (int j = i + 1; j < s.length(); j++)
        {
            if (s[i] > s[j])
            {
                temp[i] = s[i];
                cout << temp << " -- " << endl;
            }
        }
    }

    return 0;
}