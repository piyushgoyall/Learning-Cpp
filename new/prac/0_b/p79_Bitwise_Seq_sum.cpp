// Generate a subsequence sum array from an array using bitwise operations.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int val = pow(2, n);
    vector<int> subSum;
    for (int i = 0; i < (1 << n); i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if ((i & (1 << j)) != 0)
                sum += arr[j];
        }
        subSum.push_back(sum);
    }

    sort(subSum.begin(), subSum.end());
    for (int i = 0; i < val; i++)
    {
        cout << subSum[i] << " ";
    }
    return 0;
}