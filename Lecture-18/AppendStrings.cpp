// AppendStrings.cpp
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

	char a[100] = "Code";
	char b[100] = "ABC";
	int lena = length(a);
	int lenb = length(b);

	int i = lena;
	int j = 0;

	while (j <= lenb) {
		a[i] = b[j];
		i++;
		j++;
	}
	cout << a << endl;
	return 0;
}
















