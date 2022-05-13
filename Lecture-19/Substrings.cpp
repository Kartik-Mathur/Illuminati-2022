// Substrings.cpp
#include <iostream>
using namespace std;

int main() {

	char a[] = "abc";

	for (int i = 0; i < strlen(a); ++i)
	{
		for (int j = i; j < strlen(a); ++j)
		{
			for (int k = i; k <= j; ++k)
			{
				cout << a[k];
			}
			cout << endl;
		}
	}

	return 0;
}
















