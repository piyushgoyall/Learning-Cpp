#include <bits/stdc++.h>
using namespace std;

void solve(int source, int dest, int hepler, int plates, int &count)
{
    if (plates == 1)
    {
        cout << "Moving plate " << plates << " from " << source << " to " << dest << "" << endl;
        count++;
        return;
    }

    solve(source, hepler, dest, plates - 1, count);
    cout << "Moving plate " << plates << " from " << source << " to " << dest << "" << endl;
    count++;
    solve(hepler, dest, source, plates - 1, count);
}

int main()
{
    int n;
    cin >> n;

    int count = 0;

    solve(1, 3, 2, n, count);

    cout << "Total Moves: " << count << "" << endl;
    return 0;
}