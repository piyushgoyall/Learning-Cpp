#include <bits/stdc++.h>
using namespace std;

// to print rowwise sum
void printSumRow(int arr[][4], int i, int j)
{
    cout << "Printing Sum Row-wise: " << endl;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << endl;
    }
}

// to print colwise sum
void printSumCol(int arr[][4], int i, int j)
{
    cout << "Printing Sum Col-wise: " << endl;
    for (int j = 0; j < 4; j++)
    {
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += arr[i][j];
        }
        cout << sum << endl;
    }
}

int main()
{
    // create 2D array
    int arr[3][4];

    // taking input -> rowwise
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    // print
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    printSumRow(arr, 3, 4);
    printSumCol(arr, 3, 4);

    return 0;
}