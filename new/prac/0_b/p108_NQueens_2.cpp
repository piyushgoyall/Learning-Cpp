#include <bits/stdc++.h>
using namespace std;

void solve(vector<vector<string>> &ans, vector<string> &board, vector<int> &leftRow, vector<int> &upperDiagonal, vector<int> &lowerDiagonal, int n, int col)
{
    if (col == n)
    {
        ans.push_back(board);
        return;
    }

    for (int row = 0; row < n; row++)
    {
        if (leftRow[row] == 0 && upperDiagonal[row + col] == 0 && lowerDiagonal[n - 1 + col - row] == 0)
        {
            board[row][col] = 'Q';
            leftRow[row] = 1;
            upperDiagonal[row + col] = 1;
            lowerDiagonal[n - 1 + col - row] = 1;

            solve(ans, board, leftRow, upperDiagonal, lowerDiagonal, n, col + 1);

            board[row][col] = '.';
            leftRow[row] = 0;
            upperDiagonal[row + col] = 0;
            lowerDiagonal[n - 1 + col - row] = 0;
        }
    }
}

int main()
{
    int n;
    cin >> n;

    vector<vector<string>> ans;
    vector<string> board(n, string(n, '.'));

    vector<int> leftRow(n, 0);
    vector<int> upperDiagonal(2 * n - 1, 0);
    vector<int> lowerDiagonal(2 * n - 1, 0);

    solve(ans, board, leftRow, upperDiagonal, lowerDiagonal, n, 0);

    for (const auto &i : ans)
    {
        for (const auto &j : i)
            cout << j << endl;
        cout << endl;
    }

    return 0;
}