// Decimal to Binary

#include <bits/stdc++.h>
using namespace std;
int dtb(int n)
{
    int x = 1;
    int ans = 0;
    while (x <= n)
    {
        x *= 2;
    }
    x /= 2;
    while (x > 0)
    {
        int ldigit = n / x;
        n -= ldigit * x;
        x /= 2;
        ans = ans * 10 + ldigit;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << dtb(n) << endl;
    return 0;
}