// C++ code to generate all substrings of a given string using recursion.

#include <iostream>
#include <string>
using namespace std;

void generateSubstrings(string s, string current, int index)
{
    if (index == s.length())
    {
        if (!current.empty())
        {
            cout << current << endl;
        }
        return;
    }

    // Include the current character
    generateSubstrings(s, current + s[index], index + 1);

    // Exclude the current character
    generateSubstrings(s, current, index + 1);
}

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;
    generateSubstrings(str, "", 0);
    return 0;
}
