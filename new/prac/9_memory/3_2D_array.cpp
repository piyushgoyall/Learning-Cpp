#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row;
    cin >> row;

    int col;
    cin >> col;

    int **arr = new int *[row];

    // Creating array
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }

    // Taking Input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Output
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Releasing Memory
    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int **arr = new int *[n];

//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = new int[n];
//     } // Creation Done

//     // Taking Input
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     // Output
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }