// What are Catalan numbers?
// Catalan numbers are a sequence of natural numbers that occur in various counting problems, often involving recursively defined objects.
// Their closed form is in terms of binomial coefficients:
//
// Cn = (1/n+1) 2nCn = Submission CiCn-i, i = 0 to n-1
// Ex. C0 = 1
//     C1 = 1
//     C2 = C0.C1 + C1.C0 = 2
//     C3 = C0.C2 + C1.C1 + C2.C0 = 5
//     C4 = C0.C3 + C1.C2 + C2.C1 + C3.C0 = 14

#include <bits/stdc++.h>
using namespace std;

int catalan(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    int result = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        result += catalan(i) * catalan(n - i - 1);
    }

    return result;
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        cout << catalan(i) << " ";
    }
    cout << endl;
    return 0;
}
