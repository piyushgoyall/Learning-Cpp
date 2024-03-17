// Number Theory Advanced
// Fermat Little and Wilson Theoram
// Fermat's Little Theoram: If a is not divisible by p, Fermat's little theoram is equivalent to the statment that a^(p-1) - 1 is an integer multiple of p
// a^(p-1) ≡ 1(mod p)
// APPLICATIONS:
//                  a^p ≡ a(mod p)
// If a is not divisible by p,
//                  a^(p-1) ≡ 1(mod p)
// Multiplying both sides by a^(-1)
//                  a^(p-2) ≡ a^(-1)(mod p)

// Evaluating (a/b)%m = (a%m)*(b^(-1) % m)
// (a/b)%m = ((a%m) * (b^(-1)%m))%m

// Evaluating (nCr)%p using  Fermat's Theoram
// nCr = n!/(n-r)! * r!

// If p > n,
// 1) Pre - calculate factorials taking modulo p.
// 2) nCr % p = (fac[n] * modInverse(fac[r]) % p * modInverse(fac[n - r]) % p) % p

// If p < n,  (NOT VALID FOR THIS CASE)
// 1) Pre - calculate factorials using modulo p.
// 2) nCr % p = (fac[n] * modInverse(fac[r]) % p * modInverse(fac[n-r]) % p) % p

// Wilson's Theoram
// - A positive integer n > 1 is a prime if and only if 
//                  (n-1)! ≡ -1(mod n) or
//                  (n-1)! ≡ n-1(mod n)

// - In other words, (n-1)! is 1 less than a multiple of n.
// - For example, since we know that 101 is a prime, we can conclude immediately that 100! = 101k - 1 for some integer k.
// - For example, Calculate (25! % 29) 
// From Wilson's theoram, we know that 28! is -1. So we basically need to find [(-1) * inverse(28,29) * inverse(27,29) * inverse(26,29)]%29

