#include <iostream>
using namespace std;

void Update(int &y) {
	y += 1;
}

int main() {

	int x = 1;
	cout << x << endl;
	Update(x);
	cout << x << endl;

	return 0;
}
















