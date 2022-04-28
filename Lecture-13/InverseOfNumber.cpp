// InverseOfNumber.cpp
#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int n = 32145;
	int pos = 1;
	int x = 0, val;

	while (n > 0) {
		val = n % 10;
		x += pos * pow(10, val - 1);

		pos++;
		n = n / 10;
	}

	cout << "Inverse: " << x << endl;

	return 0;
}
















