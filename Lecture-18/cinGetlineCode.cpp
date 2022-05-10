// cinGetlineCode.cpp
#include <iostream>
using namespace std;

void readLine(char *a, int s, char delimiter = '\n') {
	char ch;
	ch = cin.get();

	int i = 0;
	while (i < s - 1 and ch != delimiter) {
		a[i++] = ch;

		ch = cin.get();
	}
	a[i] = '\0';
}

int main() {

	char a[100];

	readLine(a, 100);
	cout << a << endl;

	return 0;
}
















