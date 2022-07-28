// VectorInitialization.cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {

	// 1st way of initialization
	// vector<int> v = {0, 1, 2, 3, 4, 5};
	// v.push_back(6);

	// 2nd way of initialization
	// int a[] = {1, 2, 3, 4, 5};
	// int n = sizeof(a) / sizeof(int);
	// vector<int> v(a, a + n);

	// 3rd Way of initialization
	// vector<int> v({1, 2, 3, 4, 5});

	// 4th Way of initialization
	vector<int> v(100, 10); // Create 100 buckets and initialize it with 0

	cout << "Capacity: " << v.capacity() << endl;

	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;


	return 0;
}
















