// Spiral Order matrix traversal.

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
    int rs = 0;
    int cs = 0;
    int re = n - 1;
    int ce = m - 1;
    while (rs <= re && cs <= ce)
    {
        // for start row
        for (int i = cs; i <= ce; i++)
        {
            cout << arr[rs][i] << " ";
        }
        rs++;

        // for column end
        for (int j = rs; j <= re; j++)
        {
            cout << arr[j][ce] << " ";
        }
        ce--;

        // for end row
        for (int i = ce; i >= cs; i--)
        {
            cout << arr[re][i] << " ";
        }
        re--;

        // for column end
        for (int j = re; j >= rs; j--)
        {
            cout << arr[j][cs] << " ";
        }
        cs++;
    }
    return 0;
}