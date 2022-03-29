// Pattern.cpp
#include <iostream>
using namespace std;

int main() {

	int stars, i, r, j, n, spaces;
	cin >> n;

	r = 1;
	while (r <= n) {
		// 1. Spaces print kardo
		spaces = 1;
		while (spaces <= n - r) {
			cout << " ";
			spaces = spaces + 1;
		}
		// 2. Stars print kardo
		i = 1;
		while (i <= 2 * r - 1) {
			cout << "*";

			i ++;
		}
		cout << '\n';
		r = r + 1; // r = r + 1; or r++;
	}

	// To print mirror of above code
	r = n - 1;
	while (r >= 1) {
		// 1. Spaces print kardo
		spaces = 1;
		while (spaces <= n - r) {
			cout << " ";
			spaces = spaces + 1;
		}
		// 2. Stars print kardo
		i = 1;
		while (i <= 2 * r - 1) {
			cout << "*";

			i ++;
		}
		cout << '\n';

		r = r - 1;
	}

	return 0;
}
















