// Priority_Queue - Fruits.cpp
#include <iostream>
#include <queue>
using namespace std;

class Fruits {
public:
	int sweetness;
	int price;
	string name;
	double weight;
};

class comparator {
public:
	bool operator()(const Fruits &a, const Fruits &b) {
		return a.weight < b.weight;
	}
};


int main() {

	priority_queue<Fruits, vector<Fruits>, comparator> q;

	Fruits a({80, 100, "Apple", 20});
	Fruits b({50, 70, "Mango", 50});
	Fruits c({10, 20, "Kiwi", 200});
	Fruits d({90, 120, "Pineapple", 10});
	Fruits e({40, 60, "Guava", 120});

	q.push(a);
	q.push(b);
	q.push(c);
	q.push(d);
	q.push(e);

	while (!q.empty()) {
		Fruits f = q.top();
		q.pop();

		cout << "Name   : " << f.name << endl;
		cout << "Price  : " << f.price << endl;
		cout << "Sweet  : " << f.sweetness << endl;
		cout << "Weight : " << f.weight << endl << endl;
	}


	return 0;
}
















