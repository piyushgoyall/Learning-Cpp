// C++ code to Print Subsets | Print PowerSets | Print all Subsequences of a given string using recursion.

/* Without using index variable */

#include <bits/stdc++.h>
using namespace std;

void print(string input, string output)
{
    if (input.length() == 0)
    {
        if (output == "")
            cout << "NULL" << " ";
        else
            cout << output << " ";
        return;
    }

    string s1 = output;
    string s2 = output;
    s2.push_back(input[0]);

    input.erase(input.begin() + 0);

    print(input, s1);
    print(input, s2);
}

int main()
{
    string s;
    cin >> s;

    print(s, "");
    return 0;
}

/* Using an index variable */

// #include <iostream>
// #include <string>
// using namespace std;

// void generateSubstrings(string s, string current, int index)
// {
//     if (index == s.length())
//     {
//         if (!current.empty())
//         {
//             cout << current << endl;
//         }
//         return;
//     }

//     // Include the current character
//     generateSubstrings(s, current + s[index], index + 1);

//     // Exclude the current character
//     generateSubstrings(s, current, index + 1);
// }

// int main()
// {
//     string str;
//     cout << "Enter a string: ";
//     cin >> str;
//     generateSubstrings(str, "", 0);
//     return 0;
// }
