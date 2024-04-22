#include <bits/stdc++.h>
using namespace std;

int power(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }

    return n * power(n, p - 1);

    // if (p == 1)
    // {
    //     return n;
    // }

    // int sm = power(n, p - 1);
    // int bg = n * sm;

    // return bg;
}

int main()
{
    int n, p;
    cin >> n >> p;

    int ans = power(n, p);
    cout << ans << endl;
    return 0;
}