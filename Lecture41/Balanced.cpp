// Balanced.cpp
#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(char *a) {
	stack<char> s;
	for (int i = 0; a[i] ; ++i)
	{
		char ch = a[i];
		switch (ch) {
		case '{':
		case '(':
		case '[':
			s.push(ch);
			break;
		case '}':
			if (!s.empty() and s.top() == '{') {
				s.pop();
			}
			else {
				return false;
			}
			break;
		case ']':
			if (!s.empty() and s.top() == '[') {
				s.pop();
			}
			else {
				return false;
			}
			break;
		case ')':
			if (!s.empty() and s.top() == '(') {
				s.pop();
			}
			else {
				return false;
			}
		}
	}

	// After for loop
	return s.empty() == true;
}

int main() {

	char a[] = "{a+b*(c+d)+[e+(f+g)*h]+i} + {}";


	if (isBalanced(a)) {
		cout << "Balanced hai\n";
	}
	else {
		cout << "Balanced Nahi hai\n";
	}

	return 0;
}
















