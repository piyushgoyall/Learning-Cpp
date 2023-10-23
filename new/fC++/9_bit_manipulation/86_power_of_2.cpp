// Write a program to check if a given number is power of 2.

#include <bits/stdc++.h>
using namespace std;
bool two(int n)
{
    return (n && !(n & n - 1));
}

int main()
{
    int x;
    cin >> x;
    cout << two(x) << endl;
    return 0;
}