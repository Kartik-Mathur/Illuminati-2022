// Vector.cpp: Syntax
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

	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);

	print(v);
	v.push_back(5);
	print(v);
	v.pop_back();
	v.pop_back();
	print(v);

	cout << "Size: " << v.size() << endl;


	return 0;
}
















