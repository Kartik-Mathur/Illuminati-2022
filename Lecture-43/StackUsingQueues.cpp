#include <iostream>
#include <queue>
using namespace std;

class Stack {
	queue<int> q1;
	queue<int> q2;
public:
	void push(int d) {
		if (q1.empty() and q2.empty()) q1.push(d);
		else if (!q1.empty() and q2.empty()) {
			q1.push(d);
		}
		else { // q1.empty() and !q2.empty()
			q2.push(d);
		}
	}

	void pop() {
		if (!q1.empty() and q2.empty()) {
			while (q1.size() > 1) {
				int e = q1.front();
				q2.push(e);
				q1.pop();
			}
			q1.pop();
		}
		else {
			while (q2.size() > 1) {
				int e = q2.front();
				q1.push(e);
				q2.pop();
			}
			q2.pop();
		}
	}

	bool empty() {
		return q1.empty() and q2.empty();
	}

	int top() {
		if (!q1.empty() and q2.empty()) {
			while (q1.size() > 1) {
				int e = q1.front();
				q2.push(e);
				q1.pop();
			}

			int x = q1.front();
			q1.pop();
			q2.push(x);
			return x;
		}
		else {
			while (q2.size() > 1) {
				int e = q2.front();
				q1.push(e);
				q2.pop();
			}

			int x = q2.front();
			q2.pop();
			q1.push(x);
			return x;
		}
	}
};

int main() {

	Stack s;

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);

	while (!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}

	cout << endl;

	return 0;
}
















