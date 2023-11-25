// Count the number of paths possible in a maze.

#include <bits/stdc++.h>
using namespace std;

int cpMaze(int n, int i, int j)
{
    if (i == n - 1 && j == n - 1)
    {
        return 1;
    }
    if (i >= n || j >= n)
    {
        return 0;
    }
    return cpMaze(n, i + 1, j) + cpMaze(n, i, j + 1);
}

int main()
{
    cout << cpMaze(3, 0, 0) << endl;
    return 0;
}