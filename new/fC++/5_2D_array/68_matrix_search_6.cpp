#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, c;
    cin >> r >> c;
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }
    int x;
    cout << "Enter search element: ";
    cin >> x;

    int p = 0, q = c - 1;
    bool found = false;
    while (p < r && q >= 0)
    {
        if (arr[p][q] == x)
            found = true;
        if (arr[p][q] > x)
        {
            q--;
        }
        else
        {
            p++;
        }
    }
    if (found)
        cout << "Element found";
    else
        cout << "Element not found";
    return 0;
}
