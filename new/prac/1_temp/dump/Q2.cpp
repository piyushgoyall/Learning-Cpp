// Q2.Number of Islands
// Given an m x n 2D binary grid grid which represents a map of '1''s(land) and '0''s(water), return the number of islands.
// An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically.
// You may assume all four edges of the grid are all surrounded by water.
// Input : First line contains two integers m and n which represent the number of rows and number of columns in 2D binary grid respectively.
// Next all lines contains all elements of matrix.
// Output : Print integer which represent the number of islands in 2D grid Example test case:

// Input :
// 5 5
// 1 0 1 0 1
// 1 1 0 1 1
// 1 0 0 0 1
// 0 1 1 1 0
// 0 0 1 0 0

// Output: 4

#include <iostream>
#include <vector>
using namespace std;

void dfs(vector<vector<int>> &grid, int i, int j, int m, int n)
{
    if (i < 0 || j < 0 || i >= m || j >= n || grid[i][j] == 0)
    {
        return;
    }

    grid[i][j] = 0;

    dfs(grid, i + 1, j, m, n);
    dfs(grid, i - 1, j, m, n);
    dfs(grid, i, j + 1, m, n);
    dfs(grid, i, j - 1, m, n);
}

int numIslands(vector<vector<int>> &grid)
{
    if (grid.empty())
    {
        return 0;
    }

    int m = grid.size();
    int n = grid[0].size();
    int count = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] == 1)
            {
                count++;
                dfs(grid, i, j, m, n);
            }
        }
    }

    return count;
}

int main()
{
    int m, n;
    cout << "Enter number of rows and columns: ";
    cin >> m >> n;
    vector<vector<int>> grid(m, vector<int>(n));

    cout << "Enter the grid elements (row by row):" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
        }
    }

    int result = numIslands(grid);
    cout << result << endl;

    return 0;
}
