#include <iostream>
using namespace std;

int main() {

	// int a[3][3] = {
	// 	{1, 2, 3},
	// 	{4, 5, 6},
	// 	{7, 8, 9}
	// };
	int a[][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9},
		{10, 11, 12}
	};
	int n = 4, m = 3;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << a[i][j] << " ";
		}
		cout << '\n';
	}
	// cout << a[i][0] << " ";
	// cout << a[i][1] << " ";
	// cout << a[i][2] << " ";

	return 0;
}
















