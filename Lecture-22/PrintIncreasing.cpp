// PrintIncreasing.cpp
#include <iostream>
using namespace std;

void print(int n) {
	// base case
	if (n == 0) {
		return;
	}
	// recursive case
	print(n - 1);
	cout << n << " ";
}

void print1(int i, int n) {
	// base case
	if (i == n + 1) {
		return;
	}
	// recursive case
	cout << i << " ";
	print1(i + 1, n);
}


int main() {

	int n = 10;
	print(n);
	cout << '\n';
	print1(1, n);
	cout << '\n';

	return 0;
}
















