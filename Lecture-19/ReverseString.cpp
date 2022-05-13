// ReverseString.cpp
#include <iostream>
using namespace std;
int length(char *a) {
	int len = 0;
	for (int i = 0; a[i] != '\0'; ++i)
	{
		len++;
	}
	return len;
}

void ReverseString(char *a) {
	// int i = 0;
	// int j = length(a) - 1;
	// while (i < j) {
	// 	swap(a[i], a[j]);
	// 	i++;
	// 	j--;
	// }

	// Using For Loop
	for (int i = 0, j = length(a) - 1; i < j; i++, j--)
	{
		swap(a[i], a[j]);
	}
}

int main() {

	char a[] = "Coding";
	cout << a << endl;
	ReverseString(a);
	cout << a << endl;



	return 0;
}
















