// CheckPrime - Break.cpp
#include <iostream>
using namespace std;

int main() {

	int n, i;
	cin >> n;

	for (i = 2; i <= n - 1; ++i)
	{
		if (n % i == 0) {
			// Yeh number divide ho gya kisi i se [2,n-1], nahi hoga prime
			break;
		}
	}
	// Agar break se bahar aaye, number prime nhi hoga
	// agar condition fail hui toh bahar aaye, prime hoga
	if (i == n) {
		cout << "Prime hai" << endl;
	}
	// else {
	// 	cout << "Prime nahi hai" << endl;
	// }

	return 0;
}
















