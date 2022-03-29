// Pattern123.cpp
#include <iostream>
using namespace std;

int main() {

	int n, row, i, no;
	cin >> n;

	row = 1;
	while (row <= n) {
		// Work
		// 1. Print increasing numbers row times, start: 1
		i = 1;
		no = 1;
		while (i <= row) {
			cout << no << " ";
			no = no + 1;
			i = i + 1;
		}

		// 2. Print decreasing numbers row-1 times, start: row - 1
		i = 1;
		no = row - 1;
		while (i <= row - 1) {
			cout << no << " ";
			no = no - 1;
			i = i + 1;
		}

		row = row + 1;
		cout << '\n';
	}


	return 0;
}
















