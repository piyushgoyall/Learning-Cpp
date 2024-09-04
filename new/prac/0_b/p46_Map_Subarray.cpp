#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {1, 1, 1};
    int k = 2;
    unordered_map<int, int> mp;
    int result = 0, cumsum = 0;
    mp.insert({0, 1});
    for (int i = 0; i < nums.size(); i++)
    {
        cumsum += nums[i];
        if (mp.find(cumsum - k) != mp.end())
        {
            result += mp[cumsum - k];
        }
        mp[cumsum]++;
    }
    cout << result;
    return 0;
}