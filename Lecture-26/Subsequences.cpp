// Subsequences.cpp
#include <iostream>
using namespace std;

void Subsequences(char *in, char *out, int i, int j) {
	// base case
	if (in[i] == '\0') {
		out[j] = '\0';
		cout << out << endl;
		return;
	}
	// recursive case
	// 1. Include karna ith character ko jth Index pr
	out[j] = in[i];
	Subsequences(in, out, i + 1, j + 1);
	// 2. Exlude karna, ith character ko jth Index par nhi lena
	Subsequences(in, out, i + 1, j);
}

int main() {

	char in[] = "abc";
	char out[100];

	Subsequences(in, out, 0, 0);


	return 0;
}
















