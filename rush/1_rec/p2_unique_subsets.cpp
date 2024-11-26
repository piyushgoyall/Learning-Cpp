// Print unique subsets of a string.

#include <bits/stdc++.h>
using namespace std;

void solve(string input, string output, set<string> &mp)
{
    if (input.length() == 0)
    {
        if (output == "")
            mp.insert("NULL");
        else
            mp.insert(output);

        return;
    }

    string s1 = output;
    string s2 = output;

    s2.push_back(input[0]);
    input.erase(input.begin() + 0);

    solve(input, s1, mp);
    solve(input, s2, mp);
}

int main()
{
    string s;
    cin >> s;

    set<string> mp;
    solve(s, "", mp);

    for (string s : mp)
    {
        cout << s << " ";
    }
    return 0;
}