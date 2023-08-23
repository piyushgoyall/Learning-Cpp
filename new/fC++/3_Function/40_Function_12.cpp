// Decimal to hexadecimal

#include <bits/stdc++.h>
using namespace std;
string dth(int n)
{
    int x = 1;
    string ans = "";
    while (x <= n)
    {
        x *= 16;
    }
    x /= 16;
    while (x > 0)
    {
        int ldigit = n / x;
        n -= ldigit * x;
        x /= 16;

        if (ldigit <= 9)
        {
            ans = ans + to_string(ldigit);
        }
        else
        {
            char c = 'A' + ldigit - 10;
            ans.push_back(c);
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << dth(n) << endl;
    return 0;
}