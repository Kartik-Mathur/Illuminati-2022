#include <iostream>
using namespace std;

int main() {

	int arr[] = {1, 6, 0, 3, 8, 9, 8, 1};
	int n = sizeof(arr) / sizeof(int);
	int X = 9;
	for (int i = 0; i < n; ++i)
	{
		int a = X - arr[i];
		for (int j = i + 1; j < n; ++j)
		{
			if (arr[j] == a) {
				cout << "(" << arr[i] << " ," << a << ")" << endl;
			}
		}
	}

	return 0;
}
















