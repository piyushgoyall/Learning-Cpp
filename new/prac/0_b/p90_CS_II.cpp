// Combination Sum II

// Given a collection of candidate numbers(candidates) and a target sum, find all unique combinations in candidates
// where the numbers sum up to the target. Each number in candidates may only be used once in the combination.

#include <bits/stdc++.h>
using namespace std;

void solve(int i, int tgt, vector<int> &nums, vector<int> &cur, vector<vector<int>> &res)
{
    if (tgt == 0)
    {
        res.push_back(cur);
        return;
    }
    if (i == nums.size() || tgt < 0)
        return;

    cur.push_back(nums[i]);
    solve(i + 1, tgt - nums[i], nums, cur, res);
    cur.pop_back();

    while (i + 1 < nums.size() && nums[i] == nums[i + 1])
        i++;
    solve(i + 1, tgt, nums, cur, res);
}

vector<vector<int>> combSum2(vector<int> &nums, int tgt)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    vector<int> cur;
    solve(0, tgt, nums, cur, res);
    return res;
}

int main()
{
    int n, tgt;
    cin >> n >> tgt;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    vector<vector<int>> res = combSum2(nums, tgt);

    for (auto &v : res)
    {
        for (int x : v)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}
