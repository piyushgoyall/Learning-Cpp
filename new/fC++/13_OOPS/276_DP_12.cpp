// Count Number of Binary Strings
// Count number of binary strings without consecutive 1s.
// Problem: Given a positive integer N, count all possible distinct binary strings of length N such that there are no consecutive 1's
// Sample test case
// Input: N = 3
// Output: 5
// The 5 strings are 000, 001, 010, 100, 101
// Dynamic Programming
// States of the dp?
// Only depends on the last character and 'n' the states will bw number of strings of length 'i' ending with 1 and 0.
// Base Case:
// N = 1
// There will be 2 possible strings 0 and 1
// one[1] = 1
// zero[1] = 1

// OBSERVATION
// At length i,
// We have one[1 .. i-1], zero[1 .. i-1]
// one[i] = zero[i - 1]
// zero[i] = one[i - 1] + zero[i - 1]

// one[i - 1] = zero[i - 2]
// zero[i] = one[i - 1] + zero[i - 1]
//         = zero[i - 2] + zero[i - 1]


// one[i] = zero[i - 1]
// zero[i] = one[i - 1] + zero[i - 1]
//         = zero[i - 2] + zero[i - 1]

// Final Ans = zero[i] + one[i]
//           = zero[i] + zero[i - 1]
//           = zero[i + 1]
//           = Fibonacci[n + 1]

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> fib(n + 2, 0);
    fib[0] = 1;
    fib[1] = 1;
    for (int i = 2; i <= n + 1; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    cout << fib[n + 1];
    return 0;
}