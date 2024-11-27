// Ex: Input: a1B2
//     Output: a1b2, A1b2, a1B2, A1B2

#include <bits/stdc++.h>
using namespace std;

bool isDigit(char c)
{
    return (c >= '0' && c <= '9');
}

void solve(string input, string output)
{
    if (input.length() == 0)
    {
        cout << output << " ";
        return;
    }

    if (!isDigit(input[0]))
    {
        string s1 = output;
        string s2 = output;

        s1.push_back(input[0]);
        s2.push_back(toupper(input[0]));

        input.erase(input.begin() + 0);

        solve(input, s1);
        solve(input, s2);
    }
    else
    {
        output.push_back(input[0]);
        input.erase(input.begin() + 0);

        solve(input, output);
    }
}

int main()
{
    string s;
    cin >> s;

    transform(s.begin(), s.end(), s.begin(), ::tolower);

    solve(s, "");
    return 0;
}