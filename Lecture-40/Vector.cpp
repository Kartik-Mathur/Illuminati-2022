// Vector.cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(4);
	v.push_back(5);

	for (auto& y : v) {
		y = y + 1;
	}

	for (auto& y : v) {
		cout << y << endl;
	}


	return 0;
}
















