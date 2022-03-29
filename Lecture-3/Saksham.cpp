// Saksham.cpp
// PatternNumber.cpp
// PatternStar.cpp
#include <iostream>
using namespace std;

int main() {

	int n, row, stars, no;
	cin >> n;
	no = 1;
	row = 1;
	while (row <= n) {
		// Work har row ka kya kaam hai
		while (no <= row) {
			cout << no << " ";
			no = no + 1;
		}


		cout << '\n';
		row = row + 1;
	}

	return 0;
}
















