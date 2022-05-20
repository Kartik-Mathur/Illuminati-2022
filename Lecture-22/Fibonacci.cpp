// Fibonacci.cpp
#include <iostream>
using namespace std;

// int fibo(int n) {
// 	// base case
// 	if (n == 0) {
// 		return 0;
// 	}
// 	if (n == 1) {
// 		return 1;
// 	}
// 	// recursive case: fibo(n) = fibo(n-1)+fibo(n-2)
// 	int ChotaAns1 = fibo(n - 1); // Assumption
// 	int ChotaAns2 = fibo(n - 2); // Assumption
// 	int BadaAns = ChotaAns1 + ChotaAns2;
// 	return BadaAns;
// }

int fibo(int n) {
	// base case
	if (n == 0 || n == 1) {
		return n;
	}

	// recursive case: fibo(n) = fibo(n-1)+fibo(n-2)
	return fibo(n - 1) + fibo(n - 2);
}

int main() {

	int n;
	cin >> n;
	cout << fibo(n) << endl;

	return 0;
}
















