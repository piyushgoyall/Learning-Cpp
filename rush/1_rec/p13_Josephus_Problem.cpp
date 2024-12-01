#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &arr, int k, int index, int &ans)
{
    if (arr.size() == 1)
    {
        ans = arr[0];
        return;
    }

    index = (index + k) % arr.size();
    arr.erase(arr.begin() + index);
    solve(arr, k, index, ans);
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }

    int k;
    cin >> k;

    int index = 0;
    int ans = -1;

    solve(arr, k - 1, index, ans);
    cout << ans;
    return 0;
}