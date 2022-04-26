// BinarySearch.cpp
// Fastest Algorithm to search in a sorted array
#include <iostream>
using namespace std;

int main() {

	int a[] = {1, 4, 5, 8, 10};
	int n = sizeof(a) / sizeof(int);
	int key = 4;
	int s = 0, e = n - 1;
	while (s <= e) {
		int mid = (s + e) / 2;
		if (a[mid] == key) {
			cout << key << " found at index: " << mid << endl;
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
		cout << key << " not found" << endl;
	}

	return 0;
}
















