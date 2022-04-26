// CheckPrime.cpp
#include <iostream>
using namespace std;

bool CheckPrime(int n) {
	for (int i = 2; i < n; ++i)
	{
		if (n % i == 0) {
			// break;
			return false;
		}
	}
	return true;
}

int main() {

	int n, i;
	cin >> n;

	bool ans = CheckPrime(n);
	if (ans == true) {
		cout << "Prime" << endl;
	}
	else {
		cout << "Not Prime" << endl;
	}

	return 0;
}
















