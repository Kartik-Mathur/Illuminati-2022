// Arrays.cpp
#include <iostream>
using namespace std;

void print(int a[], int n) {
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	} cout << '\n';
}
void BubbleSort(int a[], int n) {
	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = 0; j < n - i - 1; ++j)
		{
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
			}
		}
	}
}
int main() {
	int a[] = {5, 7, 6, 8, 9, 0, 1, 2, 3};
	int n = sizeof(a) / sizeof(int);
	print(a, n);
	BubbleSort(a, n);
	print(a, n);

	return 0;
}
















