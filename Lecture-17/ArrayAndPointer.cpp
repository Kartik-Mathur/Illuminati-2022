// ArrayAndPointer.cpp
#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void printArray1(int arr[], int n) {
	for (int i = 0; i < n; ++i)
	{
		cout << *(arr  + i) << " ";
	}
	cout << endl;
}

void printArray2(int *arr, int n) {
	for (int i = 0; i < n; ++i)
	{
		cout << *(arr  + i) << " ";
	}
	cout << endl;
}

void printArray3(int *arr, int n) {
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {

	int arr[] = {1, 2, 3, 4};
	int n = sizeof(arr) / sizeof(int);

	cout << arr << endl;
	cout << arr + 1 << endl;

	int *x = arr;
	printArray(arr, n);
	printArray1(arr, n);
	printArray2(arr, n);
	printArray3(arr, n);

	// *(x+i) == arr[i]
	// *(arr+i) == arr[i]


	return 0;
}
















