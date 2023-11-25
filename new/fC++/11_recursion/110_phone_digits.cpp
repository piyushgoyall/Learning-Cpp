// Print all possible words from phone digits.

#include <bits/stdc++.h>
using namespace std;
string keypadArr[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void keypad(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch = s[0];
    string code = keypadArr[ch - '0'];
    string ros = s.substr(1);
    for (int i = 0; i < code.length(); i++)
    {
        keypad(ros, ans + code[i]);
    }
}
int main()
{
    string s;
    ;
    getline(cin, s);
    keypad(s, "");
    return 0;
}

// // Practice code

// #include <iostream>
// #include <vector>
// #include <queue>

// using namespace std;

// vector<string> getLetters(char digit)
// {
//     const vector<string> keypadMapping = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

//     if (digit >= '0' && digit <= '9')
//     {
//         string letters = keypadMapping[digit - '0'];
//         return {letters};
//     }

//     return {};
// }

// void generateAllCombinations(const string &digits)
// {
//     if (digits.empty())
//     {
//         cout << "Input is empty." << endl;
//         return;
//     }

//     queue<string> combinations;
//     combinations.push("");

//     while (!combinations.empty())
//     {
//         string current = combinations.front();
//         combinations.pop();

//         if (current.length() == digits.length())
//         {
//             cout << current << endl;
//         }
//         else
//         {
//             int index = current.length();
//             for (char letter : getLetters(digits[index]))
//             {
//                 combinations.push(current + letter);
//             }
//         }
//     }
// }

// int main()
// {
//     string inputDigits = "23"; // Change this to your desired input
//     cout << inputDigits << endl;
//     generateAllCombinations(inputDigits);

//     return 0;
// }
