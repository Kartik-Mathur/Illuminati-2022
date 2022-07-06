// PhoneKeypad.cpp
#include <iostream>
using namespace std;

char keys[][5] = {
	"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"
};

void PhoneKeypad(char *in, int i, char *out, int j) {
	// base case
	if (in[i] == '\0') {
		out[j] = '\0';
		cout << out << endl;
		return;
	}

	// recursive case
	int d = in[i] - '0';
	for (int k = 0; keys[d][k]; ++k)
	{
		out[j] = keys[d][k];
		PhoneKeypad(in, i + 1, out, j + 1);
	}
}

int main() {

	char in[100], out[100];
	cin >> in;
	PhoneKeypad(in, 0, out, 0);

	return 0;
}
















