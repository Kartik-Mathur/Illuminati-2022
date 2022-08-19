// List - 2.cpp
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

	for (int x : l) {
		cout << x << "-->";
	}
	cout << "NULL\n";

	int pos = 2, i;
	list<int>::iterator it = l.begin();
	for (int i = 1; i <= pos ; i++) {
		it++;
	}

	l.insert(it, 100);
	// l.remove(100);
	for (int x : l) {
		cout << x << "-->";
	}
	cout << "NULL\n";

	for (it = l.begin(); it != l.end() ; it++) {
		if (*it == 100) {
			break;
		}
	}

	l.erase(it);

	for (int x : l) {
		cout << x << "-->";
	}
	cout << "NULL\n";




	return 0;
}
