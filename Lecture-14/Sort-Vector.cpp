// Sort - Vector.cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(vector<int> v) {
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}

int main() {

	vector<int> v = {5, 6, 7, 34, 21, 43, 52, 41, 353, 64};
	print(v);
	sort(v.begin(), v.end());
	print(v);

	return 0;
}
















