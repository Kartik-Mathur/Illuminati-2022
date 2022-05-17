// WavePrint.cpp
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
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << a[i][j] << " ";
		}
		cout << '\n';
	}

	for (int j = 0; j < m; ++j)
	{
		if (j % 2 == 0) {
			for (int i = 0; i < n; ++i)
			{
				cout << a[i][j] << " ";
			}
		}
		else {
			for (int i = n - 1; i >= 0 ; i--)
			{
				cout << a[i][j] << " ";
			}
		}
	}
	cout << endl;

	return 0;
}
















