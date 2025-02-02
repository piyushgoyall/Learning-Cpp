// Find the lexicographically smallest string from an array that has the maximum matching characters with a given sample string.

#include <bits/stdc++.h>
using namespace std;

string findBestMatch(vector<string> &arr, string sample)
{
    string best = "";
    int maxMatch = -1;

    for (string &s : arr)
    {
        int matchCount = 0;
        for (int i = 0; i < min(s.size(), sample.size()); i++)
        {
            if (s[i] == sample[i])
                matchCount++;
            else
                break;
        }

        if (matchCount > maxMatch || (matchCount == maxMatch && (best.empty() || s < best)))
        {
            maxMatch = matchCount;
            best = s;
        }
    }

    return best;
}

int main()
{
    vector<string> arr = {"apple", "apricot", "banana", "apex"};
    string sample = "apply";
    cout << "Best match: " << findBestMatch(arr, sample) << endl;
    return 0;
}
