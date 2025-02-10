#include <bits/stdc++.h>
using namespace std;

vector<int> compute(string pattern)
{
    int m = pattern.length();
    vector<int> lps(m);
    int len = 0;
    int i = 1;
    lps[0] = 0;
    while (i < m)
    {
        if (pattern[i] == pattern[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if (len != 0)
            {
                len = lps[len - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}

vector<int> search(string s, string pattern)
{
    vector<int> arr;
    vector<int> lps = compute(pattern);
    int n = s.length();
    int m = pattern.length();
    int i = 0, j = 0;

    while (i < n)
    {
        if (s[i] == pattern[j])
        {
            i++;
            j++;
        }
        if (j == m)
        {
            arr.push_back(i - j);
            j = lps[j - 1];
        }
        else if (i < n && (j == 0 || s[i] != pattern[j]))
        {
            if (j != 0)
                j = lps[j - 1];
            else
                i++;
        }
    }
    return arr;
}

int main()
{
    string s;
    cin >> s;

    string pattern = "abc";

    vector<int> arr;
    arr = search(s, pattern);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}