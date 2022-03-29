// HollowDiamond.cpp
// Pattern.cpp
#include <iostream>
using namespace std;

int main() {

	int stars, i, r, j, n, spaces;

	cin >> n;

	for (r = 1; r <= n ; r++) {
		for (spaces = 1; spaces <= n - r ; spaces++) {
			cout << " ";
		}
		for (i = 1 ; i <= 2 * r - 1 ; i++) {
			if ( i == 1 || i == (2 * r - 1 ) ) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}

		cout << '\n';
	}

	// To print mirror of above code
	for (r = n - 1 ; r >= 1 ; r = r - 1) {
		for (spaces = 1; spaces <= n - r ; spaces++) {
			cout << " ";
		}

		for (i = 1 ; i <= 2 * r - 1 ; i++) {
			if ( i == 1 || i == (2 * r - 1 ) ) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << '\n';
	}


	return 0;
}
















