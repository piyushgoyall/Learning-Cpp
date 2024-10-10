#include <bits/stdc++.h>
using namespace std;

bool search(vector<vector<int>> matrix, int numberOfRows, int numberOfColumns, int target)
{
    int rows = numberOfRows;

    if (rows == 0)
        return false;

    int cols = numberOfColumns;
    if (cols == 0)
        return false;

    int i = 0;
    int j = rows - 1;
    int mid;

    if (rows > 1)
    {
        while (i <= j)
        {
            mid = i + (j - i) / 2;
            if (target == matrix[mid][cols - 1])
            {
                return true;
            }
            if (target > matrix[mid][cols - 1])
            {
                i = mid + 1;
            }
            else
            {
                j = mid - 1;
            }
        }
        rows = target > matrix[mid][cols - 1] ? mid + 1 : mid;
    }
    else
    {
        rows = 0;
    }
    if (rows >= numberOfRows)
        return false;

    i = 0;
    j = cols - 1;
    while (i <= j)
    {
        mid = i + (j - i) / 2;
        if (target == matrix[rows][mid])
        {
            return true;
        }
        if (target > matrix[rows][mid])
        {
            i = mid + 1;
        }
        else
        {
            j = mid - 1;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> matrix = {{10, 11, 12, 13}, {14, 15, 16, 17}, {27, 29, 30, 31}, {32, 33, 39, 80}};

    // Example 1
    if (search(matrix, 4, 4, 80))
        cout << "80 is Found" << endl;
    else
        cout << "80 is Not Found" << endl;

    // Example 2
    if (search(matrix, 4, 4, 37))
        cout << "37 is Found" << endl;
    else
        cout << "37 is Not Found" << endl;

    return 0;
}