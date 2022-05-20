// PrintDecreasing.cpp
#include <iostream>
using namespace std;

void print(int n) {
	// base case
	if (n == 0) {
		return;
	}
	// recursive case
	cout << n << " ";
	print(n - 1);
}

int main() {

	int n;
	cin >> n;
	print(n);

	return 0;
}
















