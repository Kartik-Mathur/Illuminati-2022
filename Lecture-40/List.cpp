// List.cpp
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

	l.push_front(6);
	l.push_front(7);
	l.push_front(8);
	l.push_front(9);

	for (int x : l) {
		cout << x << "-->";
	}
	cout << "NULL\n";

	l.pop_back();
	l.pop_front();

	// To iterate over LL, let's see for-each loop
	for (int x : l) {
		cout << x << "-->";
	}
	cout << "NULL\n";

	return 0;
}
















