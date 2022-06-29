// RatInMaze.cpp
#include <iostream>
using namespace std;

bool RatInMaze(char a[][5], int i, int j, int n, int m, int sol[][10]) {
	// base case
	if (i == n - 1 and j == m - 1) {
		sol[i][j] = 1;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				cout << sol[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
		return false;
	}

	// recursive case
	// Jis cell par aakar khade huye hai
	// ho sakta hai vo solution ka part ho
	sol[i][j] = 1;
	if (j + 1 < m and a[i][j + 1] != 'X') {
		bool KyaRightSeRaastaMila = RatInMaze(a, i, j + 1, n, m, sol);
		if (KyaRightSeRaastaMila == true) {
			return true;
		}
	}

	if (i + 1 < n and a[i + 1][j] != 'X') {
		bool KyaNeecheSeBaatBani = RatInMaze(a, i + 1, j, n, m, sol);
		if (KyaNeecheSeBaatBani == true) {
			return true;
		}
	}
	// Agar right and neeche se baat nhi banti, (i,j) cant be sol part
	sol[i][j] = 0;
	return false;
}


int main() {

	char a[][5] = {
		"0000",
		"00XX",
		"0000",
		"XX00"
	};

	int sol[10][10] = {0};
	RatInMaze(a, 0, 0, 4, 4, sol);



	return 0;
}
















