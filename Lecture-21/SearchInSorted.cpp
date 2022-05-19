// SearchInSorted.cpp
#include <iostream>
using namespace std;

void SearchInSorted(int a[][100], int n, int m) {
	int key = 13;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (a[i][j] == key) {
				cout << "Found the key: " << i << "," << j << endl;
				return;
			}
		}
	}
}


void Print2D(int a[][100], int n, int m) {
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << a[i][j] << " ";
		} cout << '\n';
	}
}

void StairCaseSearch(int a[][100], int n, int m, int key) {
	int i = 0, j = m - 1;
	while (i<n and j >= 0) {
		if (a[i][j] == key) {
			cout << "Mill gai key: " << i << "," << j << endl;
			return;
		}
		else if (a[i][j] > key) {
			j--;
		}
		else {
			i++;
		}
	}
	cout << "Nahi milla" << endl;
}

int main() {

	int a[][100] = {
		{1, 2, 3, 4},
		{5, 10, 12, 20},
		{6, 13, 15, 30},
		{40, 50, 55, 60},
		{100, 120, 140, 160}
	};
	int n, m;
	// cin >> n >> m;

	Print2D(a, 4, 4);
	// SearchInSorted(a, 4, 4);
	StairCaseSearch(a, 4, 4, 500);


	return 0;
}
















