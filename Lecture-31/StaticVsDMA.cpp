// StaticVsDMA.cpp
#include <iostream>
using namespace std;

void CheckStatic() {
	int a[20];

	for (int i = 0; i < 20; ++i)
	{
		a[i] = i + 1;
	}

	for (int i = 0; i < 20; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	// return a; we should never return the address of statically created array
}

int * createArray(int n) {
	int * a = new int[n];
	for (int i = 0; i < n; ++i)
	{
		a[i] = i + 1;
	}
	return a;
}


int main() {
	int *arr = createArray(30);
	for (int i = 0; i < 30; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	// CheckStatic();

	delete []arr;
	arr = NULL;


	return 0;
}
















