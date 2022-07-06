// SudokuSolver.cpp
#include <iostream>
#include <cmath>
using namespace std;

bool isSafe(int board[][9], int i, int j, int n, int no) {
	for (int k = 0; k < n; ++k)
	{
		if (board[i][k] == no || board[k][j] == no) {
			return false;
		}
	}
	/// Check the grid
	n = sqrt(n);
	int si = (i / n) * n;
	int sj = (j / n) * n;
	for (int l = si; l < si + n; ++l)
	{
		for (int k = sj; k < sj + n; ++k)
		{
			if (board[l][k] == no) {
				return false;
			}
		}
	}
	return true;
}


bool SudokuSolver(int board[][9], int i, int j, int n) {
	// base case
	if (i == n) {
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				cout << board[i][j] << " ";
			}
			cout << endl;
		}
		return true;
	}
	// recursive case
	if (j == n) {
		return SudokuSolver(board, i + 1, 0, n);
	}

	if (board[i][j] != 0) {
		return SudokuSolver(board, i, j + 1, n);
	}
	// For empty cell
	for (int no = 1; no <= n; ++no)
	{
		if (isSafe(board, i, j, n, no)) {
			board[i][j] = no;
			bool KyaSolveHua = SudokuSolver(board, i, j + 1, n);
			if (KyaSolveHua) {
				return true;
			}
			board[i][j] = 0;
		}
	}

	return false;
}

int main() {

	int mat[9][9] =
	{	{5, 3, 0, 0, 7, 0, 0, 0, 0},
		{6, 0, 0, 1, 9, 5, 0, 0, 0},
		{0, 9, 8, 0, 0, 0, 0, 6, 0},
		{8, 0, 0, 0, 6, 0, 0, 0, 3},
		{4, 0, 0, 8, 0, 3, 0, 0, 1},
		{7, 0, 0, 0, 2, 0, 0, 0, 6},
		{0, 6, 0, 0, 0, 0, 2, 8, 0},
		{0, 0, 0, 4, 1, 9, 0, 0, 5},
		{0, 0, 0, 0, 8, 0, 0, 7, 9}
	};

	SudokuSolver(mat, 0, 0, 9);


	return 0;
}
















