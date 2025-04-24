// Maximum sum window of size k.

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

    int k;
    cin >> k;

    int l = 0, r = k - 1;
    int summ = 0;

    for (int i = l; i <= r; i++)
        summ += arr[i];

    int maxSum = summ;

    while (r < n - 1)
    {
        summ = summ - arr[l] + arr[r + 1];
        l++;
        r++;

        maxSum = max(maxSum, summ);
    }

    cout << maxSum << endl;

    return 0;
}