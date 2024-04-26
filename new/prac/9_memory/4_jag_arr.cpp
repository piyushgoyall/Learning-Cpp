// Create a jagged array:
// 1 2 3 4
// 1 2
// 1 2 3
// 1

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row;
    cin >> row;

    int col;

    int **arr = new int *[row];

    // for (int i = 0; i < row; i++)
    // {
    //     cin >> col;

    //     arr[i] = new int[col];
    // }

    for (int i = 0; i < row; i++)
    {
        cin >> col;

        arr[i] = new int[col];
        
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "\n"
         << "Array is: " << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;

    return 0;
}