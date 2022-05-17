// PrintDiagonal.cpp
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

	int i = n - 1, j = 0;
	while (i >= 0 and j < m) {
		cout << a[i][j] << " ";
		i--;
		j++;
	} cout << "\n";

	return 0;
}
















