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

    int zeroCnt = 0, oneCnt = 0, twoCnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            zeroCnt++;
        else if (arr[i] == 1)
            oneCnt++;
        else
            twoCnt++;
    }

    int x = 0;
    while (zeroCnt--)
        arr[x++] = 0;

    while (oneCnt--)
        arr[x++] = 1;

    while (twoCnt--)
        arr[x++] = 2;

    for (int i : arr)
        cout << i << ' ';

    return 0;
}