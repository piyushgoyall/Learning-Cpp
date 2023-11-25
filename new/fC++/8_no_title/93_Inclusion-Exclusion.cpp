// Inclusion - Exclusion Property (To find number of ways of doing something)
// Here in this code we are finding total numbers divisible by 5 and 7 in a particular range.

#include <bits/stdc++.h>
using namespace std;
int divisible(int n, int a, int b)
{
    int c1 = n / a;
    int c2 = n / b;
    int c3 = n / (a * b);

    return c1 + c2 - c3;
}
int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    cout << divisible(n, a, b) << endl;
    return 0;
}