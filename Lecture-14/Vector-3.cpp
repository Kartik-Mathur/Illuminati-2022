// Vector - 3.cpp: reserve keyword
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
	v.reserve(10);
	int n;
	cin >> n; // Here n cannot be greater than the memory we have
	// reserved
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}

	for (int i = 0; i < n; ++i)
	{
		cout << v[i] << " ";
	}

	return 0;
}
















