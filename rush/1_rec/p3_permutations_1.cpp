// Permutation with spaces
// Ex : Input: "ABC"
//      Output: "A_B_C", "AB_C", "A_BC", "ABC" ("_" represent a space)

#include <bits/stdc++.h>
using namespace std;

void solve(string input, string output)
{
    if (input.length() == 0)
    {
        cout << output << " ";
        return;
    }

    string s1 = output + input[0];
    string s2 = output + "_" + input[0];

    input.erase(input.begin() + 0);

    solve(input, s1);
    solve(input, s2);
}

int main()
{
    string s;
    cin >> s;

    string output;
    output.push_back(s[0]);
    s.erase(s.begin() + 0);

    solve(s, output);
    return 0;
}