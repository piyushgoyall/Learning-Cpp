// Given an array arr[] of sorted integers and distinct positive integers, find the length of the Longest Arithmetic Progression in it.

#include <bits/stdc++.h>
using namespace std;

int longestAP(vector<int> &arr)
{
    int n = arr.size();

    if (n <= 2)
        return n;

    int maxLen = 2;

    vector<unordered_map<int, int>> dp(n);

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {

            int diff = arr[i] - arr[j];

            dp[i][diff] = dp[j].count(diff) ? dp[j][diff] + 1 : 2;

            maxLen = max(maxLen, dp[i][diff]);
        }
    }

    return maxLen;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Length of longest arithmetic progression: "
         << longestAP(arr) << endl;

    return 0;
}
