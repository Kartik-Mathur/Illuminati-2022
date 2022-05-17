// PrintLowerLeftTriangle.cpp
#include <iostream>
using namespace std;

int main() {

	int a[100][100];
	int n, m;
	cout << "Enter rows and cols: ";
	cin >> n >> m;
	int number = 1;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			// cin >> a[i][j];
			a[i][j] = number;
			number++;
			if (number > 9) {
				number = 1;
			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (i >= j) {
				cout << a[i][j] << " ";
			}
		}
		cout << '\n';
	}
	cout << endl;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (i <= j) {
				cout << a[i][j] << " ";
			}
			else {
				cout << "  ";
			}
		}
		cout << '\n';
	}
	cout << endl;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (i + j >= n - 1) {
				cout << a[i][j] << " ";
			}
			else {
				cout << "  ";
			}
		}
		cout << '\n';
	}
	return 0;
}
















