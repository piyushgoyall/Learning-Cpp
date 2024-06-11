#include <bits/stdc++.h>
using namespace std;

template <class Yu>
Yu Comp(Yu x, Yu y)
{
    return (x > y) ? x : y;
}

int main()
{
    cout << Comp<int>(1, 2) << endl;
    cout << Comp<char>('a', 'b') << endl;
    return 0;
}