#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<bool> arr(n + 1, true);

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (arr[i] == true)
        {
            for (int j = i * i; j <= n; j = j + i)
            {
                arr[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == true)
            cout << i << " ";
    }

    return 0;
}