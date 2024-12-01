// Print N-bit binary numbers having more 1’s than 0’s for any prefix

#include <bits/stdc++.h>
using namespace std;

void solve(int ones, int zeros, int n, string output)
{
    if (n == 0)
    {
        cout << output << " ";
        return;
    }

    // Add a '1' to the output
    string s1 = output;
    s1.push_back('1');
    solve(ones + 1, zeros, n - 1, s1);

    // Add a '0' only if ones > zeros
    if (ones > zeros)
    {
        string s2 = output;
        s2.push_back('0');
        solve(ones, zeros + 1, n - 1, s2);
    }
}

int main()
{
    int n;
    cin >> n;

    solve(0, 0, n, "");
    return 0;
}