// CharacterArray.cpp
#include <iostream>
using namespace std;

int main() {

	char a[] = "Code in C++";
	cout << a << endl;
	char b[] = {'C', 'o', 'd', 'e', '\0'};
	cout << b << endl;

	for (int i = 0; a[i] != '\0'; ++i)
	{
		cout << a[i] << "-";
	}
	cout << '\n';

	int arr[] = {1, 2, 3};
	cout << arr << endl;

	return 0;
}
















