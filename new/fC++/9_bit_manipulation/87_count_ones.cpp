// Write a program to count the number of ones in binary representation of a number.

#include <bits/stdc++.h>
using namespace std;
int numberofones(int n)
{
    int count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}
int main()
{
    int x;
    cin >> x;
    cout << numberofones(x);
    return 0;
}