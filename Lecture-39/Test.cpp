// LinkedList.cpp
#include <iostream>
using namespace std;

class node {
public:
	int data;
	node* next;
	node(int d) {
		data = d;
		next = NULL;
	}
};

int LengthLL(node* head) {
	int cnt = 0;
	while (head) {
		cnt++;
		head = head->next;
	}
	return cnt;
}

void insertAtFront(node* &head, node* &tail, int data) {
	node* n = new node(data);
	// if (head == NULL) {
	if (!head) {
		head = tail = n;
	}
	else {
		n->next = head;
		head = n;
	}
}

void insertAtEnd(node* &head, node* &tail, int data) {
	node* n = new node(data);
	if (!head) {
		head = tail = n;
	}
	else {
		tail->next = n;
		tail = n;
	}
}

void insertAtMid(node* &head, node* &tail, int pos, int data) {
	if (pos == 0) {
		insertAtFront(head, tail, data);
	}
	else if (pos >= LengthLL(head)) {
		insertAtEnd(head, tail, data);
	}
	else {
		node* t = head;
		for (int i = 0; i < pos - 1; ++i)
		{
			t = t->next;
		}

		node* n = new node(data);
		n->next = t->next;
		t->next = n;
	}
}

///////////////////////// DELETION IN LINKED LIST /////////////////////////////////
void deleteAtFront(node* &head, node* &tail) {
	if (!head) {
		return;
	}
	else if (head->next == NULL) {
		delete head;
		head = tail = NULL;
	}
	else {
		node* t = head;
		head = head->next;
		delete t;
	}
}

void deleteAtEnd(node* &head, node* &tail) {
	if (!head) {
		return;
	}
	else if (head->next == NULL) {
		delete head;
		head = tail = NULL;
	}
	else {
		node* t = head;
		while (t->next != tail) {
			t = t->next;
		}
		delete tail;
		tail = t;
		tail->next = NULL;
	}
}

void deleteAtMid(node* &head, node* &tail, int pos) {
	if (pos == 0) {
		deleteAtFront(head, tail);
	}
	else if (pos >= LengthLL(head) - 1) {
		deleteAtEnd(head, tail);
	}
	else {
		node* t = head;
		for (int i = 0; i < pos - 1; ++i)
		{
			t = t->next;
		}
		node* n = t->next;
		t->next = n->next;
		delete n;
	}
}

// !!!!!!!!!!!!!!!!!!!!!! DELETION IN LINKED LIST /////////////////////////////////


///////////////////////// REVERSE LINKED LIST /////////////////////////////////
void reverseLL(node* &head, node* &tail) {
	node* p = NULL;
	node* c = head, *n;

	while (c != NULL) {
		n = c->next;
		c->next = p;
		p = c;
		c = n;
	}
	swap(head, tail);
}
// !!!!!!!!!!!!!!!!!!!!!! REVERSE LINKED LIST /////////////////////////////////

///////////////////////// SEARCH LINKED LIST /////////////////////////////////
node* searchLL(node* head, int key) {
	while (head) {
		if (head -> data == key) {
			return head;
		}
		head = head->next;
	}
	return NULL;
}
// !!!!!!!!!!!!!!!!!!!!!! SEARCH LINKED LIST /////////////////////////////////


/////////////////// SEARCH LINKED LIST USING RECURSION ///////////////////////
node* searchLLRec(node* head, int key) {
	// base case
	if (head == NULL) {
		return NULL;
	}
	// recursive case
	if (head->data == key) {
		return head;
	}
	return searchLLRec(head->next, key);
}
//!!!!!!!!!!!!!!!!! SEARCH LINKED LIST USING RECURSION ///////////////////////




void printLL(node* temp) {
	while (temp != NULL) {
		cout << temp->data << "-->";
		temp = temp->next;
	}
	cout << "NULL\n";
}


int main() {
	node* head, * tail;
	head = tail = NULL;

	insertAtFront(head, tail, 1);
	insertAtFront(head, tail, 2);
	insertAtFront(head, tail, 3);
	insertAtFront(head, tail, 4);
	insertAtFront(head, tail, 5);
	insertAtEnd(head, tail, 6);
	insertAtEnd(head, tail, 7);
	insertAtEnd(head, tail, 8);
	insertAtEnd(head, tail, 9);

	printLL(head);
	insertAtMid(head, tail, 4, 100);
	printLL(head);
	reverseLL(head, tail);
	printLL(head);

	cout << "LengthLL : " << LengthLL(head) << endl;
	node* ans = searchLLRec(head, 4);
	if (ans) {
		cout << "Found the key " << ans->data << endl;
	}
	else {
		cout << "Key not found" << endl;
	}
	return 0;
}
















