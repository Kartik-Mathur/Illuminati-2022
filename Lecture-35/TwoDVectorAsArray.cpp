// TwoDVectorAsArray.cpp
#include <iostream>
#include <vector>
using namespace std;

#define NFV(v,n,m) 	for (int i = 0; i < n; ++i)\
{\
	for (int j = 0; j < m; ++j)\
	{\
		cout << v[i][j] << " ";\
	}\
	cout << endl;\
}\


int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<int> > v(n, vector<int>(m, 0));

	int number = 1;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			v[i][j] = number++;
		}
	}

	NFV(v, n, m);
	cout << endl;
	NFV(v, n, m);
	// for (int i = 0; i < n; ++i)
	// {
	// 	for (int j = 0; j < m; ++j)
	// 	{
	// 		cout << v[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

	return 0;
}
















