// Count the number of paths possible from start to end point in gameboard.

#include <bits/stdc++.h>
using namespace std;

int countPath(int s, int e)
{
    if (s == e)
    {
        return 1;
    }
    else if (s > e)
    {
        return 0;
    }
    int count = 0;
    for (int i = 1; i <= 6; i++)
    {
        count += countPath(s + i, e);
    }
    return count;
}

int main()
{
    int s, e;
    cin >> s >> e;
    cout << countPath(s, e) << endl;
    return 0;
}