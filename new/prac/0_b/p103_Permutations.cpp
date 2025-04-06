// Generate all permutations of an array / string.
// [1,2,3] = [1,2,3] [1,3,2], [2,1,3] [2,3,1] [3,1,2] [3, 2, 1]

#include <bits/stdc++.h>
using namespace std;

void helper(vector<int> &arr, vector<vector<int>> &ans, vector<int> &freq, vector<int> &temp, int n)
{
    if (temp.size() == n)
    {
        ans.push_back(temp);
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (!freq[i])
        {
            temp.push_back(arr[i]);
            freq[i] = 1;
            helper(arr, ans, freq, temp, n);
            freq[i] = 0;
            temp.pop_back();
        }
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<vector<int>> ans;
    vector<int> temp;
    vector<int> freq(n, 0);

    helper(arr, ans, freq, temp, n);
    sort(ans.begin(), ans.end());

    for (const auto &i : ans)
    {
        for (const auto &j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}