#include <bits/stdc++.h>
using namespace std;

void powerSet(vector<vector<int>> &ans, vector<int> &arr, int n, int idx)
{
    for (int i = 0; i <= (pow(2, n) - 1); i++)
    {
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            if ((i & (1 << j)) != 0)
                temp.push_back(arr[j]);
        }
        ans.push_back(temp);
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

    powerSet(ans, arr, n, 0);

    for (const auto &i : ans)
    {
        for (const auto &j : i)
            cout << j << " ";
        cout << endl;
    }
    return 0;
}