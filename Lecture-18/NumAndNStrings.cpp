// NumAndNStrings.cpp
#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	cin.get();
	char a[100];

	for (int i = 0; i < n; ++i)
	{
		cin.getline(a, 100);
		cout << "String : (" << a << ")" << endl;
	}

	return 0;
}
















