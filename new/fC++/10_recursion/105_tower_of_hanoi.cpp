// Tower of hanoi

#include <bits/stdc++.h>
using namespace std;
void tower(int n, char src, char dest, char helper)
{
    if (n == 0)
    {
        return;
    }
    tower(n - 1, src, helper, dest);
    cout << "Move from " << src << " to " << dest << endl;
    tower(n - 1, helper, dest, src);
}
int main()
{
    tower(8, 'A', 'C', 'B');
    return 0;
}