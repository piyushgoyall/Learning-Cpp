// Print natural numbers

#include <bits/stdc++.h>
using namespace std;

void print(int num)
{
    if (num == 0)
        return;

    cout << num << " ";

    print(num - 1);

    // cout << num << " ";
}

int main()
{
    int n;
    cin >> n;

    print(n);
    return 0;
}