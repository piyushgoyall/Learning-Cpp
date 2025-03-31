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

    int l = 0, m = 0, h = n - 1;
    while (m <= h)
    {
        if (arr[m] == 0)
        {
            swap(arr[l], arr[m]);
            l++, m++;
        }
        else if (arr[m] == 1)
            m++;
        else
        {
            swap(arr[m], arr[h]);
            h--;
        }
    }

    for (int i : arr)
        cout << i << ' ';

    return 0;
}