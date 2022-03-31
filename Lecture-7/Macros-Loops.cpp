// Macros - Loops.cpp
#include <iostream>
using namespace std;
#define F(n) for (int i = 0; i < n; ++i)
#define F1(n) for (int i = 1; i <= n; ++i)

int main() {
	int n = 20;

	// for (i = 0; i < n; ++i)
	F1(n)
	{
		cout << i << " ";
	}
	cout << endl;

	// 5 = 10;
	// 'A' = 'C';

	return 0;
}
















