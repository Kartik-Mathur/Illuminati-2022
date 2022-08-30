// Queue.cpp
#include <iostream>
using namespace std;

class node {
public:
	int data;
	node* next;
	node(int d): data(d), next(NULL) {}
};

class Queue {
public:
	node* head, *tail;
	Queue(): head(NULL), tail(NULL) {}

	void push(int d) {
		if (!head) {
			head = tail = new node(d);
		}
		else {
			node* n = new node(d);
			tail->next = n;
			tail = n;
		}
	}

	void pop() {
		if (!head) return;
		else if (head->next == NULL) {
			delete head;
			head = tail = NULL;
		}
		else {
			node* n = head;
			head = head->next;
			delete n;
		}
	}

	int front() {
		return head->data;
	}

	bool empty() {
		return head == NULL;
	}
};

int main() {

	Queue q;

	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);

	while (!q.empty()) {
		cout << q.front() << " ";

		q.pop();
	}
	cout << endl;


	return 0;
}
















