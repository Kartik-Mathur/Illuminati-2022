#include <iostream>
using namespace std;

int main() {

	int arr[] = {2, 4, 1, 3};
	int n = sizeof(arr) / sizeof(int);
	int X = 5;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			if (arr[i] + arr[j] == X) {
				cout << arr[i] << ", " << arr[j] << endl;
			}
		}
	}

	return 0;
}
















