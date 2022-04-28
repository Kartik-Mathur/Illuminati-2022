// Vector - 5.cpp: Initialization
#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v) {
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}


int main() {

	vector<int> v({1, 2, 3, 4, 5, 6, 7, 8, 9});
	print(v);


	return 0;
}
















