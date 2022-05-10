// NumAndString.cpp
#include <iostream>
using namespace std;

int main() {

	int a;
	char arr[100];

	cin >> a;
	cin.get(); // This will take care of '\n' or ' ' that will come
	// after the integer value before entering the string
	// case 1:
	// 10'\n'
	// CodingBlocks
	// case 2:
	// 10' 'CodingBlocks

	cin.getline(arr, 100);

	cout << "Integer : " << a << endl;
	cout << "String : (" << arr << ")" << endl;

	return 0;
}
















