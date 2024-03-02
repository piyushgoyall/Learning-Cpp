// KMP Algorithm
// Calculate indices of the occurrences of string s in t.

// This ALGO reduces the time complexity of the previous file from O(ST) to O(S + T)

// Prefix Function: prefix[i] is the length of the longest proper prefix of the substring s[0 .. i] which is also a suffix of this substring.
// By definition, prefix[0] = 0.
// Prefix[i] = maximum k such that s[0 .. k-1] = s[i - (k-1) .. i]

// Input: T = "abcabcd"
// Prefix Array: [0, 0, 0, 1, 2, 3]
// Prefix function: TIME COMPLEXITY O(n^3)
// vector<int> prefix_function(string s)
// {
//     int n = (int)s.length();
//     vector<int> pi(n);
//     for (int i = 0; i < n; i++)
//     {
//         for (int k = 0; k <= i; k++)
//         {
//             if (s.substr(0, k) == s.substr(i - k + 1, k))
//             {
//                 pi[i] = k;
//             }
//         }
//     }
//     return pi;
// }

// Can we optimise prefix function further?

// #include <bits/stdc++.h>
// using namespace std;

// vector<int> prefix_function(string s)
// {
//     int n = s.size();
//     vector<int> pi(n, 0);
//     for (int i = 1; i < n; i++)
//     {
//         int j = pi[i - 1];

//         while (j > 0 and s[i] != s[j])
//             j = pi[j - 1];

//         if (s[i] == s[j])
//             j++;
//         pi[i] = j;
//     }
//     return pi; // Time Complexity = O(n)
// }

// int32_t main()
// {
//     string s = "abcabcd";
//     vector<int> res = prefix_function(s);
//     for (auto i : res)
//     {
//         cout << i << " ";
//     }
//     cout << "\n";
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

vector<int> prefix_function(string s)
{
    int n = s.size();
    vector<int> pi(n, 0);
    for (int i = 1; i < n; i++)
    {
        int j = pi[i - 1];

        while (j > 0 and s[i] != s[j])
            j = pi[j - 1];

        if (s[i] == s[j])
            j++;
        pi[i] = j;
    }
    return pi; // Time Complexity = O(n)
}

int32_t main()
{
    string s = "na";
    vector<int> prefix = prefix_function(s);

    string t = "apnacollegena";

    int pos = -1;
    int i(0), j(0);
    while (i < t.size())
    {
        if (t[i] == s[j])
        {
            j++;
            i++;
        }
        else
        {
            if (j != 0)
                j = prefix[j - 1];
            else
                i++;
        }
        if (j == s.size())
        {
            pos = i - s.size();
            break;
        }
    }
    cout << pos;
}
// Time Complexity: O(S + T)