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

void UpdateLargest(char *largest, char *a) {
	int len_a = length(a);
	for (int i = 0; i <= len_a; ++i)
	{
		largest[i] = a[i];
	}
}
int main() {
	char a[100];
	char largest[100];
	int len_largest = 0;
	int n;
	cout << "Enter n: ";
	cin >> n;
	cin.get();
	for (int i = 0; i < n; ++i)
	{
		cin.getline(a, 100);
		int str_len = length(a);
		if (str_len > len_largest) {
			UpdateLargest(largest, a) ;
			len_largest = str_len;
		}
	}

	cout << "Largest String: " << largest << endl;
	cout << "Len: " << len_largest << endl;


	return 0;
}

