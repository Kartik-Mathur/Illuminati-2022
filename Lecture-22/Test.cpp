#include <iostream>
using namespace std;

// int fact(int n) {
// 	// base case
// 	if (n == 0) {
// 		return 1;
// 	}
// 	// recursive case : fact(n) = n * fact(n-1);
// 	int ChotaAns = fact(n - 1); // Pure assumption
// 	int BadaAns = n * ChotaAns;
// 	return BadaAns;
// }

int fact(int n) {
	// base case
	if (n == 0) {
		return 1;
	}
	// recursive case
	return n * fact(n - 1);
}

int main() {

	int n;
	cin >> n;

	cout << fact(n) << endl;


	return 0;
}
















