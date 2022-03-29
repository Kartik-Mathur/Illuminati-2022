// HollowDiamond.cpp
// Pattern.cpp
#include <iostream>
using namespace std;

int main() {

	int stars, i, r, j, n, spaces;

	cin >> n;
	n = n - 1;
	for (int i = 0; i < 2 * n - 1 + 2; ++i)
	{
		cout << "*";
	} cout << '\n';

	for (r = 1; r <= n ; r++) {
		cout << "*";
		for (spaces = 1; spaces <= n - r ; spaces++) {
			cout << "*";
		}
		for (i = 1 ; i <= 2 * r - 1 ; i++) {
			cout << " ";
		}
		for (spaces = 1; spaces <= n - r ; spaces++) {
			cout << "*";
		}
		cout << "*";

		cout << '\n';
	}

	// To print mirror of above code
	for (r = n - 1 ; r >= 1 ; r = r - 1) {
		cout << "*";

		for (spaces = 1; spaces <= n - r ; spaces++) {
			cout << "*";
		}

		for (i = 1 ; i <= 2 * r - 1 ; i++) {
			cout << " ";
		}
		for (spaces = 1; spaces <= n - r ; spaces++) {
			cout << "*";
		}
		cout << "*";

		cout << '\n';
	}

	for (int i = 0; i < 2 * n - 1 + 2; ++i)
	{
		cout << "*";
	} cout << '\n';

	return 0;
}
















