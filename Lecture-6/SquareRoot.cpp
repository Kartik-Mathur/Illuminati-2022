// SquareRoot.cpp
#include <iostream>
using namespace std;

int main() {

	int n, k;
	float i;
	cout << "Jiska Square root nikalna hai batao: ";
	cin >> n;

	// for (i = 0; i * i <= n; ++i)
	// {
	// 	// Kuch kaam krna hi nhi, bas i * i <= n
	// 	// fail kab hota hai yeh dekhna hai
	// }

	// i = i - 1;

	// cout << i << endl;
	// First decimal place ki value ke liye
	float inc = 1;
	for (k = 0; k < 4; ++k)
	{
		while (i * i <= n) {
			i = i + inc;
		}
		i = i - inc;
		inc = inc / 10;
	}
	cout << i << endl;

	// cout << i << endl;
	// Second decimal place value ke liye
	// inc = inc / 10;
	// while (i * i <= n) {
	// 	i = i + inc;
	// }
	// i = i - inc;
	return 0;
}
















