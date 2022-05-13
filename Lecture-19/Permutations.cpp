// Permutations.cpp
#include <iostream>
using namespace std;

void printFreqArray(int *freq, int n = 26) {
	for (int i = 0; i < n; ++i)
	{
		cout << freq[i] << " ";
	} cout << '\n';
}

int main() {

	char a[] = "abbcdpyz" , b[] = "bbcdzpay";
	int freq[26] = {0};

	printFreqArray(freq);
	for (int i = 0; a[i] != '\0'; ++i)
	{
		char ch = a[i];
		int indx = ch - 'a';
		freq[indx]++;
	}

	printFreqArray(freq);
	for (int i = 0; b[i] != '\0'; ++i)
	{
		char ch = b[i];
		int indx = ch - 'a';
		freq[indx]--;
	}

	printFreqArray(freq);
	for (int i = 0; i < 26; ++i)
	{
		cout << (char)(i + 'a') << " ";
	} cout << endl;

	bool isPermutation = true;
	for (int i = 0; i < 26; ++i)
	{
		if (freq[i] != 0) {
			cout << "Not Permutations" << endl;
			isPermutation = false;
			break;
		}
	}

	if (isPermutation == true)
	{
		cout << "Permutations" << endl;
	}


	return 0;
}
















