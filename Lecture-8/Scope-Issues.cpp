// Scope - Issues.cpp
#include <iostream>
using namespace std;

int main() {

	int i;
	int n;
	cin >> n;

	for (i = 2; i <= n - 1; ++i)
	{
		if (n % i == 0) {
			break;
		}
	}
	if (i == n) {
		cout << "Prime" << endl;
	}
	else {
		cout << "Not Prime" << endl;
	}

	return 0;
}
















