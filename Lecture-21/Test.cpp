#include <iostream>
using namespace std;

void SpiralPrint(int a[][100], int n, int m) {
	int sr = 0, sc = 0, er = n - 1, ec = m - 1;
	int total_numbers = n * m;
	int cnt = 0;

	while (sr <= er and sc <= ec) {
		// 1. print sr from sc to ec
		for (int j = sc; j <= ec; ++j)
		{
			cout << a[sr][j] << " ";
			cnt++;
			if (cnt == total_numbers) {
				return;
			}
		}
		sr++;

		// 2. print ec from sr to er
		for (int i = sr; i <= er; ++i)
		{
			cout << a[i][ec] << " ";
			cnt++;
			if (cnt == total_numbers) {
				return;
			}
		}
		ec--;
		// 3. print er from ec to sc

		for (int j = ec; j >= sc; --j)
		{
			cout << a[er][j] << " ";
			cnt++;
			if (cnt == total_numbers) {
				return;
			}
		}
		er --;
		// 4. print sc from er to sr
		for (int i = er; i >= sr; --i)
		{
			cout << a[i][sc] << " ";
			cnt++;
			if (cnt == total_numbers) {
				return;
			}
		}
		sc++;
	}

}

void Take2D(int a[][100], int n, int m) {
	int number = 1;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			a[i][j] = number++;
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

int main() {

	int a[100][100];
	int n, m;
	cin >> n >> m;

	Take2D(a, n, m);
	Print2D(a, n, m);
	SpiralPrint(a, n, m);

	return 0;
}
















