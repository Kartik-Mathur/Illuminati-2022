// RotateString.cpp
#include <iostream>
#include <cstring> // strlen: Length nikalne wala function 
using namespace std;

void ReverseString(char *a, int i, int j) {
	for ( ; i < j; i++, j--) {
		swap(a[i], a[j]);
	}
}
int main() {

	char a[] = "Codingcpp";
	int n;
	cin >> n;
	n = n % (strlen(a));
	cout << a << endl; // Codingcpp
	ReverseString(a, 0, strlen(a) - 1);
	// cout << a << endl; // ppcgnidoC
	ReverseString(a, 0, n - 1);
	// cout << a << endl;
	ReverseString(a, n, strlen(a) - 1);
	cout << a << endl;


	return 0;
}
















