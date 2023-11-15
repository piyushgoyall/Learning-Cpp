// Output all numbers before an input number in increasing and decreasing order.

#include <bits/stdc++.h>
using namespace std;
void dec(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << "\t";
    dec(n - 1);
}

void inc(int n)
{
    if (n == 1)
    {
        cout << "1\t";
        return;
    }
    inc(n - 1);
    cout << n << "\t";
}
int main()
{
    int n;
    cin >> n;
    dec(n);
    cout << "\n";
    inc(n);
    return 0;
}