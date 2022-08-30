// CircularQueue.cpp
#include <iostream>
using namespace std;

class Queue {
	int *a, n, cs, f, e;
public:
	Queue(int s = 5) {
		n = s;
		a = new int[s];
		cs = 0;
		f = 0;
		e = n - 1;
	}

	void push(int d) {
		if (cs < n) {
			e = (e + 1) % n;
			a[e] = d;
			cs++;
		}
		else {
			cout << "Overflow\n";
		}
	}

	void pop() {
		if (cs > 0) {
			f = (f + 1) % n;
			cs--;
		}
		else {
			cout << "Underflow\n";
		}
	}

	bool empty() {
		return cs == 0;
	}

	int front() {
		return a[f];
	}
};

int main() {

	Queue q;

	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.push(6);

	while (!q.empty()) {
		cout << q.front() << " ";

		q.pop();
	}
	cout << endl;

	q.pop();

	return 0;
}
















