// MinStepsTo1.cpp
#include <iostream>
using namespace std;

int MinStepsTo1(int n) {
	if (n == 1) {
		return 0;
	}

	int op1, op2, op3;
	op1 = op2 = op3 = INT_MAX;

	op1 = MinStepsTo1(n - 1);

	if (n % 2 == 0) {
		op2 = MinStepsTo1(n / 2);
	}

	if (n % 3 == 0) {
		op3 = MinStepsTo1(n / 3);
	}

	return min(op1, min(op2, op3)) + 1;
}

int main() {

	cout  <<  MinStepsTo1(18) << endl;
	cout  <<  MinStepsTo1(10) << endl;

	return 0;
}
















