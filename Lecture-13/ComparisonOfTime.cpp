#include <iostream>
#include <ctime>
using namespace std;

void searchLinear(int a[], int n, int key) {
	int i;
	for (i = 0; i < n; ++i)
	{
		if (a[i] == key) {
			// cout << "Found using linear search" << endl;
			break;
		}
	}
	if (i == n) {
		// cout << "Key not found using linear search" << endl;
	}
}

void binarySearch(int a[], int n, int key) {
	int s = 0, e = n - 1;
	while (s <= e) {
		int mid = (s + e) / 2;
		if (a[mid] == key) {
			// cout << key << " found at index: " << mid << endl;
			break;
		}
		else if (a[mid] < key) {
			s = mid + 1;
		}
		else {
			e = mid - 1;
		}
	}
	if (s > e) {
		// cout << key << " not found" << endl;
	}
}

void InitializeArray(int a[], int n) {
	int number = 1;
	for (int i = 0; i < n; ++i)
	{
		a[i] = number++;
	}
}

void printArray(int a[], int n) {
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

int main() {
	int a[1000000];
	int n, key;
	cin >> n;
	cout << "Enter key: ";
	cin >> key;
	InitializeArray(a, n);

	clock_t t;
	t = clock();
	searchLinear(a, n, key);
	t = clock() - t;
	cout << "Linear search took: " << t << " milli" << endl;

	t = clock();
	binarySearch(a, n, key);
	t = clock() - t;
	cout << "Binary search took: " << t << " milli" << endl;



	return 0;
}
















