// Input: Hello I am Human
// Output: Human am I Hello

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    int n = s.length(), i = 0;
    string ans = "";
    vector<string> arr;

    // while (i < n)
    // {
    //     if (s[i] != ' ')
    //     {
    //         ans = ans + s[i];
    //         // cout << "- " << ans;
    //     }
    //     else
    //     {
    //         if (i < n)
    //         {
    //             arr.push_back(ans);
    //             ans = "";
    //         }
    //     }
    //     i++;
    // }

    for (char c : s)
    {
        if (c != ' ')
        {
            ans += c;
        }
        else
        {
            arr.push_back(ans);
            ans = "";
        }
    }

    arr.push_back(ans);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i].length() << " ";
    }

    // for (const auto &x : arr)
    // {
    //     cout << x.length() << " ";
    // }

    cout << endl;

    reverse(arr.begin(), arr.end());
    for (auto x : arr)
    {
        cout << x << " ";
    }

    return 0;
}