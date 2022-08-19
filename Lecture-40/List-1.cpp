// List - 1.cpp
#include <iostream>
#include <list>
using namespace std;

int main() {

	list <int> l; // doubly linkedlist

	l.push_back(1);
	l.push_back(2);
	l.push_back(4);
	l.push_back(3);
	l.push_back(5);

	for (list<int>::iterator it = l.begin(); it != l.end() ; it++) {
		cout << *it << "-->";
	}
	cout << "NULL\n";

	for (list<int>::reverse_iterator it = l.rbegin(); it != l.rend(); it++) {
		cout << *it << "-->";
	}
	cout << "NULL\n";

	for (auto it = l.begin(); it != l.end() ; it++) {
		cout << *it << "-->";
	}
	cout << "NULL\n";

	for (auto it = l.rbegin(); it != l.rend(); it++) {
		cout << *it << "-->";
	}
	cout << "NULL\n";



	return 0;
}
















