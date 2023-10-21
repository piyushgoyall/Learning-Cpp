// SET BIT
// For a given position set that bit to 1.

#include <bits/stdc++.h>
using namespace std;
int setBit(int num, int pos)
{
    return (num | (1 << pos));
}
int main()
{
    cout << setBit(5, 1) << endl;
}