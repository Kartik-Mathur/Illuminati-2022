// PatternABC.cpp
#include <iostream>
using namespace std;

int main() {

	int n;
	char ch;
	cin >> n;

	for (int r = 1; r <= n; ++r)
	{
		ch = 'A';
		// Increasing Characters
		for (int c = 0; c < n - r + 1; ++c)
		{
			cout << ch << " ";
			ch++;
		}

		ch = ch - 1;
		// Decreasing Characters
		for (int c = 0; c < n - r + 1; ++c)
		{
			cout << ch << " ";
			ch--;
		}

		cout << '\n';
	}

	// char ch = 'A';
	// for (int i = 0; i < 5; ++i)
	// {
	// 	cout << ch << " ";
	// 	ch ++;
	// } // A B C D E
	// cout << "Loop ke bahar " << ch << endl; // F
	// ch = ch - 1; // E
	// for (int i = 0; i < 5; ++i)
	// {
	// 	cout << ch << " ";
	// 	ch --;
	// }
	// cout << endl;


	// char ch = 'A';
	// cout << ch << endl;

	// ch++;
	// cout << ch << endl;

	// ch++;
	// cout << ch << endl;

	return 0;
}
















