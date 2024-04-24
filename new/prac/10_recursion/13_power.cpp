// Find power of a number

#include <bits/stdc++.h>
using namespace std;

int power(int n, int p)
{
    if (p == 0)
        return 1;

    if (p == 1)
        return n;

    if ((p % 2) == 0)
        return power(n, (p / 2)) * power(n, (p / 2));

    else
        return n * power(n, (p / 2)) * power(n, (p / 2));
}

int main()
{
    int n;
    cin >> n;

    int p;
    cin >> p;

    cout << power(n, p);
    return 0;
}