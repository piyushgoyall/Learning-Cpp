// Introduction, Fibonacci in Log(n)
// Matrix Exponentiation
// Given a square matrix A, we will calculate A^n.
// Note: Matrix Exponentiation is only possible for square matrices.
// Matrix Exponentiation is formed of two parts: Matrix Multiplication & Binary Exponentiation
// Matrix Multiplication Ex: [2, 4, 1, 2        [1, 2, 3
//                            8, 4, 3, 6         4, 5, 6
//                            1, 7, 9, 5]        7, 8, 9
//                                               4, 5, 6]
// Output Matrices: [33, 42, 51
//                   69, 90, 111
//                   112, 134, 156]

// CODE (TIME COMPLEXITY: O(n^3))
// vector<vector<int>> multiply(vector<vector<int>> a, vector<vector<int>> b)
// {
//     int n = a.size();
//     vector<vector<int>> ans(n, vector<int>(n, 0));

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             for (int k = 0; k < n; k++)
//             {
//                 ans[i][j] += a[i][k] * b[k][j];
//             }
//         }
//     }
//     return ans;
// }

// Binary Exponentiation
// Cases: First Case: n -> odd
//                    A^n = A^(n/2) x A^(n/2) x A
//        Second Case: n -> even 
//                    A^n = A^(n/2) x A^(n/2)
// This time A is a matrix instead of integer.
// Time Complexity: O(log(n))

// Matrix Expo - Example
// Fibonacci Numbers: F(n) = F(n-1) + F(n-2)
// Using Recursion: O(2^n)
// Using DP: O(n)
// Using Matrix Exponentiation: O(log(n))

// Representing fibonacci series in the form of matrix multiplication
// [f(n)       =    [a, b   x [f(n-1)
//  f(n-1)]          c, d]     f(n-2)]
// n'th state                   n-1'th state

// Finding the values of a, b, c and d ...
//              a*f(n-1) + b(n-2) = f(n)
//              c*f(n-1) + d*f(n-2) = f(n-1)
//              We get,
//              a = 1, b = 1, c = 1, d = 0

#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5+2, MOD = 1e9 +7;

signed main()
{
    int n;
    cin>>n;

    vector<vector<int>> a = {{1,1},{1,0}};
    
    return 0;
}