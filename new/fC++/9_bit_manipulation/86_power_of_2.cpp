// Write a program to check if a given number is power of 2.

#include <bits/stdc++.h>
using namespace std;
bool two(int n)
{
    return (n && !(n & n - 1));
}

int main()
{
    cout << two(14) << endl;
    return 0;
}