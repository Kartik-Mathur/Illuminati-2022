// Vector - 1.cpp: Using push_back
#include <iostream>
#include <vector>
using namespace std;
#define pb push_back

void print(vector<int> v) {
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}

int main() {
	vector<int> v;
	int data;
	while (true) {
		cin >> data;
		v.pb(data);

		print(v);
		cout << "size: " << v.size() << endl;
		cout << "capacity: " << v.capacity() << endl;
	}


	return 0;
}
















