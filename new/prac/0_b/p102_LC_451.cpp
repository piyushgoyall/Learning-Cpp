// Same question but only if the string contains lower and uppercase characters.

#include <bits/stdc++.h>
using namespace std;

string frequencySort(string s)
{
    string ans = "";
    vector<pair<int, int>> lowerFreq(26);
    vector<pair<int, int>> upperFreq(26);

    for (int i = 0; i < 26; i++)
    {
        lowerFreq[i] = {0, i};
        upperFreq[i] = {0, i};
    }

    for (char i : s)
    {
        if (i >= 'a' && i <= 'z')
            lowerFreq[i - 'a'].first++;
        else if (i >= 'A' && i <= 'Z')
            upperFreq[i - 'A'].first++;
    }

    sort(lowerFreq.begin(), lowerFreq.end(), [](pair<int, int> &a, pair<int, int> &b)
         { return a.first > b.first; });
    sort(upperFreq.begin(), upperFreq.end(), [](pair<int, int> &a, pair<int, int> &b)
         { return a.first > b.first; });

    int i = 0, j = 0;
    while (i < 26 && lowerFreq[i].first > 0 || j < 26 && upperFreq[j].first > 0)
    {
        if (i < 26 && lowerFreq[i].first > 0)
        {
            ans += string(lowerFreq[i].first, lowerFreq[i].second + 'a');
            i++;
        }
        if (j < 26 && upperFreq[j].first > 0)
        {
            ans += string(upperFreq[j].first, upperFreq[j].second + 'A');
            j++;
        }
    }

    ans.erase(remove_if(ans.begin(), ans.end(), ::isdigit), ans.end());

    return ans;
}

int main()
{
    string s;
    cin >> s;

    string ans = frequencySort(s);
    cout << ans;

    return 0;
}