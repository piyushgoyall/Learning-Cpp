// Permutation with Case Change | Recursion
// Assuming input string is always lowercase.
// Ex. Input: ab
//     Output: ab, aB, Ab, AB

#include <bits/stdc++.h>
using namespace std;

void solve(string input, string output)
{
    if (input.length() == 0)
    {
        cout << output << " ";
        return;
    }

    string s1 = output;
    string s2 = output;

    s1.push_back(input[0]);
    s2.push_back(toupper(input[0]));

    input.erase(input.begin() + 0);

    solve(input, s1);
    solve(input, s2);
}

int main()
{
    string s;
    cin >> s;

    solve(s, "");
    return 0;
}