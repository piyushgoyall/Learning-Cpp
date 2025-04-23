#include <bits/stdc++.h>
using namespace std;

bool isSafe(int row, int col, vector<string> &board, int n)
{
    // check upper diagonal
    int tempRow = row;
    int tempCol = col;

    while (row >= 0 && col >= 0)
    {
        if (board[row][col] == 'Q')
            return false;

        row--;
        col--;
    }

    row = tempRow;
    col = tempCol;

    while (col >= 0)
    {
        if (board[row][col] == 'Q')
            return false;
        col--;
    }

    row = tempRow;
    col = tempCol;

    while (row < n && col >= 0)
    {
        if (board[row][col] == 'Q')
            return false;
        row++;
        col--;
    }

    return true;
}

void solve(int col, vector<vector<string>> &ans, vector<string> &board, int n)
{
    if (col == n)
    {
        ans.push_back(board);
        return;
    }

    for (int row = 0; row < n; row++)
    {
        if (isSafe(row, col, board, n))
        {
            board[row][col] = 'Q';
            solve(col + 1, ans, board, n);
            board[row][col] = '.';
        }
    }
}

int main()
{
    int n;
    cin >> n;

    vector<vector<string>> ans;
    vector<string> board(n, string(n, '.'));

    solve(0, ans, board, n);

    for (const auto &i : ans)
    {
        for (const auto &j : i)
            cout << j << endl;
        cout << endl;
    }
    return 0;
}