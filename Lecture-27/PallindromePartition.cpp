// PallindromePartition.cpp
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
bool isPallindrome(string s) {
	int i = 0, j = s.length() - 1;
	while (i < j) {
		if (s[i] != s[j]) {
			return false;
		}
		i++;
		j--;
	}
	return true;
}

void PallindromePartition(vector<string> &v, int i, string &s) {
	// base case
	if (s[i] == '\0') {
		for (int i = 0; i < v.size(); ++i)
		{
			cout << v[i] << " ";
		}
		cout << endl;
		return;
	}
	// recursive case
	for (int j = i; j < s.length(); ++j)
	{
		string x = s.substr(i, j - i + 1);
		if (isPallindrome(x) == true) {
			v.push_back(x);
			PallindromePartition(v, j + 1, s);
			v.pop_back(); // Backtracking
		}
	}
}

int main() {

	string s = "abaa";
	vector<string> v;
	PallindromePartition(v, 0, s);


	// int i = 0;
	// for (int j = i; j < s.length(); ++j)
	// {
	// 	cout << s.substr(i, j - i + 1) << endl;
	// }

	return 0;
}
















