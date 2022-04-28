// Vector - 4.cpp: creating buckets in vector
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

	int n, number = 1;
	cin >> n;

	vector<int> v(n); // Toh yeh vector ke andar n buckets
	// create kar dega
	for (int i = 0; i < n; ++i)
	{
		v[i] = number++;
	}

	for (int i = 0; i < n; ++i)
	{
		cout << v[i] << " ";
	}
	return 0;
}
















