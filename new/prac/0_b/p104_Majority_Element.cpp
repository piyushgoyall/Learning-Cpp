#include <bits/stdc++.h>
using namespace std;

int majorityElementApproach_1(vector<int> v)
{
    map<int, int> mp;
    for (int i : v)
        mp[i]++;
    int val = v.size() / 2;
    for (const auto &i : mp)
    {
        if (i.second > val)
            return i.first;
    }
    return 0;
}

int majorityElementApproach_2(vector<int> v)
{
    int n = v.size();
    int ele, idx = 0, count = 0;
    while (idx < n)
    {
        if (count == 0)
            ele = v[idx];

        if (v[idx] == ele)
            count++;

        else
            count--;

        idx++;
    }
    return ele;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cout << majorityElementApproach_1(v) << endl;
    cout << majorityElementApproach_2(v);
    return 0;
}
