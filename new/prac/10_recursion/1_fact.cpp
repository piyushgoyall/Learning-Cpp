// Factorial using recursion

#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    // base case
    if (n == 0)
        return 1;

    // int smallProb = fact(n - 1);
    // int bigProb = n * pro;

    // return bigProb;

    return n * fact(n - 1);
}

int main()
{
    int n;
    cin >> n;

    int ans = fact(n);
    cout << ans << endl;
    return 0;
}