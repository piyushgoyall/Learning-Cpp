// MAXIMUM CIRCULAR SUBARRAY SUM

#include <bits/stdc++.h>
using namespace std;

int kadane(int arr[], int n)
{
    int currsum = 0;
    int maxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currsum += arr[i];
        if (currsum < 0)
        {
            currsum = 0;
        }
        maxsum = max(maxsum, currsum);
    }
    return maxsum;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int wrapsum;
    int nonwrapsum;
    nonwrapsum = kadane(arr, n);
    int tsum = 0;
    for (int i = 0; i < n; i++)
    {
        tsum += arr[i];
        arr[i] = -arr[i];
    }
    wrapsum = tsum + kadane(arr, n);
    cout << max(wrapsum, nonwrapsum) << endl;
    return 0;
}