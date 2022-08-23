// Stack - LL.cpp
#include <iostream>
using namespace std;

class node {
public:
	int data;
	node* next;
	node(int d): data(d), next(NULL) {}
};

class Stack {
public:
	node* head;
	Stack() {
		head = NULL;
	}

	void push(int d) {
		if (head == NULL) {
			head = new node(d);
		}
		else {
			node *n = new node(d);
			n->next = head;
			head = n;
		}
	}

	void pop() {
		if (!head) return;
		else if (head->next == NULL) {
			delete head;
			head = NULL;
		}
		else {
			node* n = head;
			head = head->next;
			delete n;
		}
	}

	bool empty() {
		return head == NULL;
	}

	int top() {
		return head->data;
	}
};

int main() {

	Stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

	while (!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}
	cout << endl;

	return 0;
}
















