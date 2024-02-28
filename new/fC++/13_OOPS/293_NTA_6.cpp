// Boring Factorials SPOJ
// Problem Statement: Neha gives you a prime number P and an integer N close to P, and asks you to find N! modulo P.
// Constraints:
// 1 < P <= 2*10^9
// 1 <= N <= 2*10^9
// Abs(N-P) <= 1000

// - N being very large, Calculating n! mod p is not possible
// - If n>=p, (n!)%p = 0, because (1..p..n)%p = 0
// - If n<p use Wilson Theoram which says
// - (p-1)! ≡ p-1(mod p)
// But, now we have to remove (n+1) * (n+2) * .. (p-1) We will remove them by taking inverse modulo
// for(int i=n+1;i<p;i++)
//      res = (res * modInverse(i,p))%p

// We will use Fermat's Little Theoram to calculate the modulo inverse.
//                  a ^ (p-2) ≡ a^(-1)(mod p)

// Time Complexity
// Taking inversion of 'p-n' numbers in logarithmic time O((p-n)*Log n)

#include <bits/stdc++.h>
using namespace std;

int power(int x,int y,int p)
{
    int res = 1;
    x = x%p;
    while(y>0)
    {
        if(y&1)
            res = (res*x)
    }
}

int modInverse(int a ,int p)
{
    return power(a,p-2,p);
}

int modfact(int n, int p)
{
    if (p <= n)
        return 0;

    int res = (p - 1);
    for (int i = n + 1; i < p; i++)
    {
        res = (res * modInverse(i, p)) % p;
    }
    return res;
}

int main()
{
    int n, p;
    cin >> n >> p;
    cout << modfact(n, p) << "\n";
    return 0;
}