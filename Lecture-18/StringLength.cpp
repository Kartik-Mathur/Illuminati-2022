// StringLength.cpp
#include <iostream>
using namespace std;

int length(char *a) {
	int cnt = 0;
	for (int i = 0; a[i] != '\0'; ++i)
	{
		cnt ++;
	}
	return cnt;
}

int main() {

	char a[100];
	cin.getline(a, 100);

	cout << "Length: " << length(a) << endl;

	return 0;
}
















