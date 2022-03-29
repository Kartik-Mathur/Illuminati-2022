// PrintEvenNumbers.cpp
#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	// 2nd way to print even numbers
	int no = 1;
	while (no <= n) { // Condition check
		// work
		if (no % 2 == 0) {
			cout << no << " ";
		}

		no = no + 1; // Updation
	}
	cout << endl;

	// 1st Way to print even numbers
	// int no = 2; // Initialization
	// while (no <= n) { // Condition check
	// 	// Work
	// 	cout << no << " ";

	// 	no = no + 2; // Updation
	// }
	// cout << endl;

	return 0;
}
















