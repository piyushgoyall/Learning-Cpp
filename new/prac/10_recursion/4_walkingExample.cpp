#include <bits/stdc++.h>
using namespace std;

void reachHome(int src, int dest)
{
    cout << "Src: " << src << " Dest: " << dest << endl;

    // Base Case
    if (src == dest)
    {
        cout << "Readched" << endl;
        return;
    }

    src++;
    reachHome(src, dest);
}

int main()
{
    int dest = 10;
    int src = 1;

    reachHome(src, dest);

    int **arr = new int *[row];
    int *arr = new int[5];

    return 0;
}
