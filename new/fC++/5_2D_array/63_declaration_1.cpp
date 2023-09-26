#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "2D ARRAY: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "\t";
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
    return 0;
}