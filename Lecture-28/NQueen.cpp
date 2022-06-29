// NQueen.cpp
#include <iostream>
using namespace std;

bool isSafe(int board[][100], int n, int i, int j) {
	for (int k = 0; k < n; ++k)
	{
		if (board[i][k] || board[k][j]) {
			return false;
		}
	}

	int a = i, b = j;
	while (i >= 0 and j < n) {
		if (board[i][j]) {
			return false;
		}
		i--;
		j++;
	}
	i = a, j = b;
	while (i >= 0 and j >= 0) {
		if (board[i][j]) {
			return false;
		}
		i--;
		j--;
	}
	return true;
}

bool NQueen(int board[][100], int n, int i) {
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
		cout << endl;

		return false;
	}

	// recursive case
	for (int j = 0; j < n; ++j)
	{
		if (isSafe(board, n, i, j)) {
			board[i][j] = 1;
			bool KyaBakiHui = NQueen(board, n, i + 1);
			if (KyaBakiHui) {
				return true;
			}
			board[i][j] = 0;
		}
	}
	return false;
}


int main() {

	int board[100][100] = {0};
	int n;
	cin >> n;
	NQueen(board, n, 0);

	return 0;
}
















