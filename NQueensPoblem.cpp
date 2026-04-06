#include<bits/stdc++.h>
using namespace std;

bool issafe(vector<string>& board, int row, int col, int n)
{
    //row cheek
    for(int j=0; j<n; j++)
    {
        if(board[row][j]=='Q')return false;
    }

    // column check
    for(int i = 0; i < row; i++)
        if(board[i][col] == 'Q') return false;

    // upper-left diagonal
    for(int i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if(board[i][j] == 'Q') return false;

    // upper-right diagonal
    for(int i = row, j = col; i >= 0 && j < n; i--, j++)
        if(board[i][j] == 'Q') return false;

    return true;
}

void nqueens(vector<string>& board, int row, int n,
             vector<vector<string>>& ans)
{
    if(row == n)
    {
        ans.push_back(board);
        return;
    }

    for(int j = 0; j < n; j++)
    {
        if(issafe(board, row, j, n))
        {
            board[row][j] = 'Q';
            nqueens(board, row + 1, n, ans);
            board[row][j] = '.';
        }
    }
}

int main()
{
    int n;
    cin >> n;

    vector<string> board(n, string(n, '.'));
    vector<vector<string>> ans;

    nqueens(board, 0, n, ans);

    for(auto &solution : ans)
    {
        for(auto &row : solution)
        {
            cout << row << endl;
        }
        cout << endl;
    }
}
