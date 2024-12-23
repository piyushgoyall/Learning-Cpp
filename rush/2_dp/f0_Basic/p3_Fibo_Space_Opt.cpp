// Return n'th fibonacci number(0 based indexing).
// T.C. = O(n), S.C. = O(1)

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int prev = 1, prev2 = 0, curr;
    for (int i = 2; i <= n; i++)
    {
        curr = prev + prev2;
        prev2 = prev;
        prev = curr;
    }

    cout << prev;
    return 0;
}