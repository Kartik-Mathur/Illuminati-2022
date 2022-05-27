// IntToString.cpp
#include <iostream>
using namespace std;

void IntToString(int n) {
	// base case
	if (n == 0) { return ;}
	// recursive case
	IntToString(n / 10);

	int last_digit = n % 10;
	if (last_digit == 0) { cout << "Zero "; }
	else if (last_digit == 1) {cout << "One ";}
	else if (last_digit == 2) {cout << "Two ";}
	else if (last_digit == 3) {cout << "Three ";}
	else if (last_digit == 4) {cout << "Four ";}
	else if (last_digit == 5) {cout << "Five ";}
	else if (last_digit == 6) {cout << "Six ";}
	else if (last_digit == 7) {cout << "Seven ";}
	else if (last_digit == 8) {cout << "Eight ";}
	else if (last_digit == 9) {cout << "Nine ";}
}

int main() {
	int n = 10032;
	IntToString(n);

	return 0;
}
















