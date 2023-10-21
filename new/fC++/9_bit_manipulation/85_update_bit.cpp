// UPDATE BIT
// update the bit at a given position to a given value.

#include <bits/stdc++.h>
using namespace std;
int upBit(int num, int pos, int value)
{
    int mask = ~(1 << pos);
    num = num & mask;
    return (num | (value << pos));
}
int main()
{
    cout << upBit(5, 1, 1) << endl;
}