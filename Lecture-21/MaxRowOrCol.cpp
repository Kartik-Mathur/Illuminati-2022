// MaxRowOrCol.cpp
#include <iostream>
using namespace std;

int main() {

	int a[][4] = {
		{1, 2, 3, 4},
		{5, 6, 700, 8},
		{9, 10, 1100, 12},
		{13, 1400, 15, 1600}
	};

	int row = -1;
	int col = -1;
	int mx = INT_MIN;
	for (int i = 0; i < 4; ++i)
	{
		int sum = 0;
		for (int j = 0; j < 4; ++j)
		{
			sum += a[i][j];
		}
		if (sum > mx) {
			mx = sum;
			row = i;
			col = -1;
		}
	}

	for (int j = 0; j < 4; ++j)
	{
		int sum = 0;
		for (int i = 0; i < 4; ++i)
		{
			sum += a[i][j];
		}
		if (sum > mx) {
			mx = sum;
			col = j;
			row = -1;
		}
	}

	if (row == -1) {
		cout << "Maximum Sum of col: " << col << ", Sum: " << mx << endl;
	}
	else {
		cout << "Maximum Sum of row: " << row << ", Sum: " << mx << endl;
	}


	return 0;
}
















