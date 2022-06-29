#include <iostream>
using namespace std;

int main() {

	string s;
	s = "Coding Blocks";
	cout << s << endl;

	s = "Learning Strings";
	cout << s << endl;

	// ways to Initialize strings
	char arr[] = "Hello World";
	string s1(arr);
	cout << "String S1: " << s1 << endl;

	string s2 = "Hello World!!";
	cout << s2 << endl;

	for (int i = 0; i < s.length(); ++i)
	{
		cout << s[i] << " ";
	} cout << endl;

	return 0;
}
















