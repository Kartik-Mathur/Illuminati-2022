// PrintAllDia.cpp
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

	cout << endl;
	for (int j = 0; j < m; ++j)
	{
		int i = 0, k = j;
		while (i < n and k < m) {
			cout << a[i][k] << " ";
			i++;
			k++;
		}
		cout << '\n';
	}

	return 0;
}
















