#include <iostream>
using namespace std;

void Permutations(char *a, int i) {
	// base case
	if (a[i] == '\0') {
		cout << a << endl;
		return;
	}
	// recursive case
	for (int j = i; a[j] != '\0' ; ++j)
	{
		swap(a[i], a[j]);
		Permutations(a, i + 1);
		swap(a[i], a[j]); // Backtracking
	}
}

int main() {

	char a[] = "abc";
	Permutations(a, 0);


	return 0;
}
















