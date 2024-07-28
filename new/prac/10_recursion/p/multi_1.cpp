// C++ Recursion : Calculating product of two numbers without multiplication operator

#include <bits/stdc++.h>
using namespace std;

int solve(int a, int b)
{
    if (a == 0 || b == 0)
    {
        return 0;
    }

    return a + solve(a, b - 1);
}

int main()
{
    int a, b;
    cin >> a >> b;
    int x = solve(abs(a), abs(b));
    if (a >= 0 && b >= 0 || a < 0 && b < 0)
        cout << x;

    else
        cout << -x << endl;

    return 0;
}