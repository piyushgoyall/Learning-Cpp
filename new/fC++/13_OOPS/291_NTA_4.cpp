// Number Theory Advanced
// Binary Exponentiation
// Many times, our answer is out of range of int. To avoid this we use modulo operation to overcome this problem.
// Some of the properties of modulo operations are:
// (a + b) % m = (a % m) + (b % m)
// (a * b) % m = (a % m) * (b % m)
// (a - b) % m = (a % m) - (b % m)
// (a / b) % m = (a % m) * (b ^ (-1) % m)

// Recursive Version: To calculate a^n
// Cases: Fisrt Case: n -> odd
//        a^n = a^(n/2) x a^(n/2) x a
//        Second Case: n -> even
//        a^n = a^(n/2) x a^(n/2)

// Iterative version: To calculate a^45
// We can write
//              45 = 1 x 2^5 + 0 x 2^4 + 1 x 2^3 + 1 x 2^2 + 0 x 2^1 + 1 x 2^0
//              45 = (101101)2
//              7^45 can be calculted easily
//              We just have to notice 2^3 = 2^2 + 2^2
// Algorithm:
// 1) Start with a variable x = 1. Keep multiplying it with itself.
// 2) Whenever there is 1 in binary representation, multiply it with answer.

// RECURSIVE VERSION

#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5 + 2, MOD = 1e9 + 7;

int power(int a, int n)
{
    if (n == 0)
        return 1;
    int p = power(a, n / 2) % MOD;
    if (n & 1)
    {
        return (((p * p) % MOD) * a) % MOD;
    }
    else
    {
        return (p * p) % MOD;
    }
}

signed main()
{
    int a, n;
    cin >> a >> n;

    a %= MOD;
    cout << power(a, n) << endl;
    return 0;
}

// ITERATIVE VERSION

// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// const int N = 1e5 + 2, MOD = 1e9 + 7;

// int power(int a, int n)
// {
//     a %= MOD;
//     int ans = 1;
//     while (n > 0)
//     {
//         if (n & 1)
//             ans = (ans * a) % MOD;

//         a = (a * a) % MOD;
//         n = n >> 1;
//     }
//     return ans;
// }

// signed main()
// {
//     int a, n;
//     cin >> a >> n;

//     cout << power(a, n) << endl;
//     return 0;
// }