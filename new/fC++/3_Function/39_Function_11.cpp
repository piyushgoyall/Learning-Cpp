// Decimal to Octal

#include <bits/stdc++.h>
using namespace std;
int dto(int n)
{
    int x = 1;
    int ans = 0;
    while (x <= n)
    {
        x *= 8;
    }
    x /= 8;
    while (x > 0)
    {
        int ldigit = n / x;
        n -= ldigit * x;
        x /= 8;
        ans = ans * 10 + ldigit;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << dto(n) << endl;
    return 0;
}