#include <bits/stdc++.h>
using namespace std;

int maxRowSum(int arr[][4], int i, int j)
{
    int maxi = INT_MIN;
    int rowIdx = -1;

    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum += arr[i][j];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowIdx = i;
        }
    }
    cout << "Maximum row sum is: " << maxi << endl;
    return rowIdx;
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

    int ansIndx = maxRowSum(arr, 3, 4);
    cout << "Max row-sum is at index: " << endl;

    return 0;
}