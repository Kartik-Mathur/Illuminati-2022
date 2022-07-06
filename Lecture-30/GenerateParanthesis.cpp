// GenerateParanthesis.cpp
#include <iostream>
using namespace std;

void GenerateParanthesis(int n, int open, int close, char *a, int i) {
	// base case
	if (i == 2 * n) {
		a[i] = '\0';
		cout << a << endl;
		return;
	}

	// recursive case
	if (open < n) {
		a[i] = '(';
		GenerateParanthesis(n, open + 1, close, a, i + 1);
	}
	if (close < open) {
		a[i] = ')';
		GenerateParanthesis(n, open, close + 1, a, i + 1);
	}
}

int main() {

	int n;
	cin >> n;
	char a[1000];
	GenerateParanthesis(n, 0, 0, a, 0);

	return 0;
}
















