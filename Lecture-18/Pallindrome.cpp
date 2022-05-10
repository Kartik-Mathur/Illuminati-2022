// Pallindrome.cpp
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

bool isPallindrome(char *a) {
	int i = 0;
	int j = length(a) - 1;

	while (i < j) {
		if (a[i] == a[j]) {
			i++;
			j--;
		}
		else {
			return false;
		}
	}
	return true;
}

int main() {
	char a[] = "Naman";
	bool ans = isPallindrome(a);
	if (ans == true) {
		cout << "Pallindrome Hai" << endl;
	}
	else {
		cout << "Pallindrome Nahi Hai" << endl;

	}




	return 0;
}
















