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

#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    return 0;
}