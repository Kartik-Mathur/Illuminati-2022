// HollowRhombus.cpp
#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	// Pehli line ka kaam
	for (int i = 0; i < n - 1; i++)
	{
		cout << " ";
	}

	for (int i = 0; i < n; i++)
	{
		cout << "*";
	}
	cout << '\n';

	// Beech wali lines ka kaam
	for (int i = 1; i <= n - 2; i++)
	{
		// 1. Print n-i-1 spaces
		for (int spaces = 0; spaces < n - i - 1; spaces++)
		{
			cout << ' ';
		}

		// 2. Print single '*'
		cout << '*';
		// 3. Print n-2 spaces
		for (int spaces = 0; spaces < n - 2; spaces++)
		{
			cout << ' ';
		}
		// 4. Print single '*'
		cout << '*';

		cout << '\n';
	}

	// Last wali line ka kaam
	for (int i = 0; i < n; i++)
	{
		cout << '*';
	}
	cout << endl;

	return 0;
}
















