// Dynamic Programming
// If we can handle smaller problems then we use their learnings to solve a bigger problem.
// Similar understanding is applied in Dynamic Programming.
//         Properties of Dynamic Programming
//       /                                   \
// Optimal Substructure           |    Overlapping Subproblem
//                                |
// If we can write a recurrence   | If our subproblems repeat,
//  relation, then a problem      | then a problem is said to
//  is said to have optimal       | have overlapping subproblem
//  substructure.                 |

//      Ways to handle Overlapping Subproblem
//      /                                \
// Memoization(Top - Down)         |    Tabulation(Bottom - Up)
//                                 |
// A lookup table is maintained    | Solution is built from base.
//  and checked before computation | It is an iterative process.
// of any state. Recursion is      |
// involved.                       |


// KEY POINTS
// -Minimization and maximization problems are generally solved with dp where we want exhaustive solution. (Sometimes with binary search on answer).
// -"Find the number of ways" is also a very popular type of DP problems.
// -Wherever we can form recurrence relation or given in question can be solved using DP. (Sometimes with matrix exponentitation).



// Memoization (Top - Down)

int fib[200] = {-1};

int computeFib(int n)
{
    if (n == 0 || n == 1)
        return n;

    if (fib[n] != -1)
        return fib[n];

    int res = fib[n - 1] + fib[n - 2];
    fib[n] = res; // memoization part

    return res;
}

// Tabulation (Bottom - Up)

int n;
cin >> n;

vi fib(n + 1);
fib[1] = 0, fib[2] = 1;

for (int i = 2; i <= n; i++)
{
    fib[i] = fib[i - 1] + fib[i - 2];
}

cout << fib[n] << endl;