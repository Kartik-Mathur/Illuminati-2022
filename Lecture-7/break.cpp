// break.cpp
#include <iostream>
using namespace std;

int main() {
	int i;

	for (i = 0; i < 10; ++i)
	{
		if (i == 15) {
			break;
		}
		cout << i << " ";
	}
	cout << "\nLoop se bahar i : " << i << " ";
	cout << endl;
	return 0;
}
















