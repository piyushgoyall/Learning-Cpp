// 779. K-th Symbol in Grammar (LeetCode)

#include <bits/stdc++.h>
using namespace std;

void solve(int n)
{
    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }

    int mid = pow(2, n - 1) / 2;

    if (k <= mid)
        return solve(n - 1, k);
    else
        return !(solve(n - 1, k - mid));
}

int main()
{
    int n;
    cin >> n;

    solve(n);

    return 0;
}