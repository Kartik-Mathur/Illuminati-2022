// ArrayFunctions.cpp
#include <iostream>
using namespace std;
// void printArray(int a[5], int n) {// or
void printArray(int a[], int n) {
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << '\n';
}

int main() {

	int a[] = {1, 2, 3, 4, 5, 8, 9, 10};
	int n = sizeof(a) / sizeof(int); // Yeh wali cheez sirf aur sirf
	// Waha kaam karti hai jaha array banaya jaa rha hai
	// Array ko function mei pass krne ke baad yeh kaam nhi krta
	cout << "Size of array(n): " << n << endl;
	// Jab Jab array jaega uska size bhi bhejna jarrori hai
	printArray(a, n);

	return 0;
}



























