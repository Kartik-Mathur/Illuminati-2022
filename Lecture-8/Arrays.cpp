// Arrays.cpp
#include <iostream>
using namespace std;

int main() {

	int a[500];
	int n;
	cout << "Enter n(max:500): ";
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << '\n';

	// cin >> a[0];
	// cin >> a[1];
	// cin >> a[2];
	// cin >> a[3];
	// cin >> a[4];
	// cin >> a[5];
	// cin >> a[6];
	// cin >> a[7];
	// cin >> a[8];
	// cin >> a[9];
	// cin >> a[10];
	// a[0] = 1;
	// a[1] = 2;
	// a[2] = 3;

	// cout << a[0] << endl;
	// cout << a[1] << endl;
	// cout << a[2] << endl;

	return 0;
}






