// 2dArray.cpp
#include <iostream>
using namespace std;
#define DMA2D(a,n,m) a = new int*[n]; for (int i = 0; i < n; ++i){a[i]=new int[m];}

int main() {
	int n, m;
	cin >> n >> m;
	int ** a;
	DMA2D(a, n, m);

	// int **a = new int*[n];

	// for (int i = 0; i < n; ++i)
	// {
	// 	a[i] = new int[m];
	// }

	int number = 1;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			a[i][j] = number++;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	// Free up the TWO D Space
	for (int i = 0; i < n; ++i)
	{
		delete[] a[i];
	}
	delete[] a;
	a = NULL;

	return 0;
}
















