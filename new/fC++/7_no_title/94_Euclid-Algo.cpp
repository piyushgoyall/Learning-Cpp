// Euclid Algorithm to find gcd.
// GCD does not change on subtracting the two given numbers(we can also use remainder).

#include <bits/stdc++.h>
using namespace std;
int ea_gcd(int n1, int n2)
{
    while (n2 != 0)
    {
        int rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }
    return n1;
}
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    cout << ea_gcd(n1, n2);
    return 0;
}

// int maxx = max(n1,n2);
// int res=maxx % min(n1,n2);
// if(res != 0)
// {
//     maxx = res;
//     ea_gcd(res,min(n1,n2));
// }
// return res;
