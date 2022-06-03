// StringToInt.cpp
#include <iostream>
using namespace std;

int StringToInt(char *a, int n) {
	// base case
	if (n == 0) {
		return 0;
	}
	// recursive case
	int last_digit = a[n - 1] - '0';
	int ChotaAns = StringToInt(a, n - 1);
	int BadaAns = ChotaAns * 10 + last_digit;
	return BadaAns;
}

int main() {
	char a[100];
	cin >> a;

	int n = strlen(a);
	int ans = StringToInt(a, n);
	cout << ans << endl;
	cout << ans + 10 << endl;

	return 0;
}
















