// PatternNumberStars.cpp
#include <iostream>
using namespace std;

int main() {

	int row, n, i, no;
	cin >> n;
	row = 1;
	while (row <= n - 1) {
		// Work
		// 1. Increasing numbers row times starting from 1
		i = 1;
		no = 1;
		while (i <= row) {
			cout << no << " ";
			no = no + 1;
			i = i + 1;
		}
		// 2. Stars print kardo 2*(n-row) - 1 times
		i = 1;
		while (i <= 2 * (n - row) - 1) {
			cout << "* ";
			i = i + 1;
		}

		// 3. Decreasing numbers print kardo row times, starting from row
		i = 1; no = row;
		while (i <= row) {
			cout << no << " ";
			no = no - 1;
			i = i + 1;
		}

		row = row + 1;
		cout << '\n';
	}

	// Last row ka kaam alag se kardo
	i = 1;
	no = 1;
	while (i <= row) {
		cout << no << " ";
		no = no + 1;
		i = i + 1;
	}

	i = 1;
	no = row - 1;
	while (i <= row - 1) {
		cout << no << " ";
		no = no - 1;
		i = i + 1;
	}
	cout << endl;

	return 0;
}
















