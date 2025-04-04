// Find Common Characters
// Given a string array words, return an array of all characters that show up
// in all strings within the words(including duplicates).You may return the answer in any order.

#include <bits/stdc++.h>
using namespace std;

vector<string> commonChars(vector<string> &words)
{
    int n = words.size();
    vector<string> ans;
    if (n == 1)
    {
        for (char i : words[0])
            ans.push_back(to_string(i));
        return ans;
    }

    vector<int> alphaFreq(26, 0);
    for (char i : words[0])
    {
        alphaFreq[i - 'a']++;
    }

    for (int i = 1; i < n; i++)
    {
        vector<int> tempFreq(26, 0);
        for (char i : words[i])
        {
            tempFreq[i - 'a']++;
        }

        for (int i = 0; i < 26; i++)
        {
            alphaFreq[i] = min(alphaFreq[i], tempFreq[i]);
        }
    }

    for (int i = 0; i < 26; i++)
    {
        while (alphaFreq[i] > 0)
        {
            ans.push_back(string(1, i + 'a'));
            alphaFreq[i]--;
        }
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<string> words(n);
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
    }

    vector<string> ans = commonChars(words);
    for (const auto &i : ans)
        cout << i << " ";
    return 0;
}