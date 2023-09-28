// 1 2    5  6       19  22
// 3 4    7  8       43  50

// 2  4  1  2      1  2  3
// 8  4  3  6      4  5  6
// 1  7  9  5      7  8  9
// .               4  5  6

// Multiply two matrices.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int arr[a][b], brr[b][c];
    cout << "Enter elements of first array: " << endl;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Enter elements of second array: " << endl;
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> brr[i][j];
        }
    }
    int res[a][c], i, j;
    for (i = 0; i < a; i++)
    {
        int sum = 0;
        for (j = 0; j < c; j++)
        {
            cout << "- " << arr[i][j] << " - " << brr[j][i] << " -" << endl;
            sum += arr[i][j] * brr[j][i];
            cout << "- " << sum << " -" << endl;
        }
        res[i][j] = sum;
    }
    return 0;
}