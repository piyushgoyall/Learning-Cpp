// Number Theory Advanced
// Euler Totient Function
// Represented as Φ(n)  -->  1 <= m < n
//                           gcd (m, n) = 1
// Φ(n) : number of numbers from 1 to n - 1 which are coprime with n
// Φ(n) = n*(1 - 1/p1) * (1 - 1/p2) * (1 - 1/p3).... * (1 - 1/pk)
// where p1, p2, p3, .. , pk are distinct prime factors of n.

// Implementation
// 1) Declare an array a[] of size n + 1.
// 2) Initialize the array with a[i] = i;
// 3) Iterate from 2 to n and check if(a[i] == i), if yes, that means it is a prime number because it is not touched by previous numbers
// during their iteration. Change it to a[i] - 1 and multiply all its multiples with (1 - 1/a[i])
// 4) You have your array with totient values ready.

#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5 + 2, MOD = 1e9 + 7;

int totient[N];

signed main()
{
    for (int i = 0; i < N; i++)
    {
        totient[i] = i;
    }

    for (int i = 2; i < N; i++)
    {
        if (totient[i] == i)
        {
            for (int j = 2 * i; j < N; j+=i)
            {
                totient[j] *= i - 1;
                totient[j] /= i;
            }
            totient[i] = i - 1;
        }
    }

    for (int i = 2; i < 11; i++)
    {
        cout << totient[i] << " ";
    }
    return 0;
}