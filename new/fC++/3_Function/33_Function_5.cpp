// calculate nCr

#include <bits/stdc++.h>
using namespace std;
int fac(int num)
{
    int pro = 1;
    for (int i = 1; i <= num; i++)
    {
        pro = pro * i;
    }
    return pro;
}
int main()
{
    int n, r;
    cin >> n >> r;
    cout << (fac(n)) / (fac(n - r) * fac(r));
    return 0;
}