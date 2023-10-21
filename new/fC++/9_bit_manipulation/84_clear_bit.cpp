// CLEAR BIT
// For a given position se that bit to 0.

#include <bits/stdc++.h>
using namespace std;
int clearBit(int num, int pos)
{
    int mask = ~(1 << pos);
    return (num & mask);
}
int main()
{
    cout << clearBit(5, 2) << endl;
}