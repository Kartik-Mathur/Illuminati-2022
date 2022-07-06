// NStaircase.cpp
#include <iostream>
using namespace std;

int NStaircase(int n) {
	// base case
	if (n == 0) {
		return 1;
	}
	if (n < 0) {
		return 0;
	}

	// recursive case
	return NStaircase(n - 1) + NStaircase(n - 2) + NStaircase(n - 3);
}

int StairsK(int n, int k) {
	// base case
	if (n == 0) {
		return 1;
	}
	if (n < 0) {
		return 0;
	}
	// recursive case
	int ans = 0;
	for (int i = 1; i <= k; ++i)
	{
		ans += StairsK(n - i, k);
	}
	return ans;
}

int main() {

	int n;
	cin >> n;

	cout << NStaircase(n) << endl;
	cout << StairsK(n, 3) << endl;

	return 0;
}
















