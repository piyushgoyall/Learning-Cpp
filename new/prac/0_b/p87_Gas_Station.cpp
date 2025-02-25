// Minimize Max Distance to Gas Station

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

    vector<int> toPlace(n - 1, 0);

    while (k--)
    {
        double maxStretch = -1;
        int maxIdx = -1;
        for (int i = 0; i < n - 1; i++)
        {
            double val = (arr[i + 1] - arr[i]) / (toPlace[i] + 1);
            if (val > maxStretch)
            {
                maxStretch = val;
                maxIdx = i;
            }
        }
        toPlace[maxIdx]++;
    }

    double ans = -1;
    for (int i = 0; i < n - 1; i++)
    {
        double val = (arr[i + 1] - arr[i]) / (double)(toPlace[i] + 1);
        ans = max(ans, val);
    }

    cout << fixed << setprecision(2) << ans;

    return 0;
}