// Generate all permutations of an array / string.
// [1,2,3] = [1,2,3] [1,3,2], [2,1,3] [2,3,1] [3,1,2] [3, 2, 1]

#include <bits/stdc++.h>
using namespace std;

void helper_1(vector<int> &arr, vector<vector<int>> &ans, vector<int> &freq, vector<int> &temp, int n)
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
            helper_1(arr, ans, freq, temp, n);
            freq[i] = 0;
            temp.pop_back();
        }
    }
}

void helper_2(vector<int> &arr, vector<vector<int>> &result, int idx, int n)
{
    if (idx == n)
    {
        result.push_back(arr);
        return;
    }

    for (int i = idx; i < n; i++)
    {
        swap(arr[idx], arr[i]);
        helper_2(arr, result, idx + 1, n);
        swap(arr[idx], arr[i]);
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Method 1
    vector<vector<int>> ans;
    vector<int> temp;
    vector<int> freq(n, 0);

    helper_1(arr, ans, freq, temp, n);
    sort(ans.begin(), ans.end());

    cout << "Method 1: " << endl;
    for (const auto &i : ans)
    {
        for (const auto &j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    // Method 2
    vector<vector<int>> result;
    helper_2(arr, result, 0, n);

    cout << "\n" << "Method 2: " << endl;
    for (const auto &i : result)
    {
        for (const auto &j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}