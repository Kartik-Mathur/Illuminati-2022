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

/////////////////// MERGE LINKED LIST USING RECURSION ///////////////////////
node* mergeLL(node* a, node* b) {
	// base case
	if (a == NULL) return b;
	if (b == NULL) return a;

	node* nH;
	if (a->data < b->data) {
		nH = a;
		nH->next = mergeLL(a->next, b);
	}
	else {
		nH = b;
		nH->next = mergeLL(a, b->next);
	}
	return nH;
}
//!!!!!!!!!!!!!!!!! MERGE LINKED LIST USING RECURSION ///////////////////////


/////////////////// MIDDLE ELEMENT LINKED LIST  ///////////////////////
node* midLL(node* head) {
	if (head == NULL || head->next == NULL) {
		return head;
	}

	node* slow = head;
	node* fast = head->next;
	while (fast != NULL and fast->next != NULL) {
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;
}
//!!!!!!!!!!!!!!!!! MERGE ELEMENT LINKED LIST   ///////////////////////


/////////////////// MERGE SORT LINKED LIST  ///////////////////////
node* mergeSort(node *head) {
	// base case
	if (!head || !head->next) {
		return head;
	}
	// recursive case
	// 1. Divide
	node * m = midLL(head);
	node* a = head;
	node* b = m->next;
	m->next = NULL;

	// 2. Sort
	a = mergeSort(a);
	b = mergeSort(b);

	// 3.  Merge
	node* nH = mergeLL(a, b);
	return nH;
}
//!!!!!!!!!!!!!!!!! MERGE SORT LINKED LIST  ///////////////////////

/////////////////// BUBBLE SORT LINKED LIST  ///////////////////////
void bubbleSort(node* &head) {
	node* p, *c, *n;
	int len = LengthLL(head);

	for (int i = 0; i < len - 1; ++i)
	{
		c = head; p = NULL;
		while (c and c->next) {
			n = c->next;
			if (c->data > n->data) {
				// 1. swapping hogi
				if (p == NULL) {
					// head swap hoga
					c->next = n->next;
					n->next = c;
					head = p = n;
				}
				else {
					// head swap nahi hoga
					c->next = n->next;
					n->next = c;
					p->next = n;
					p = n;
				}
			}
			else {
				// 2. Swapping nhi hogi
				p = c;
				c = c->next;
			}
		}
	}
}
//!!!!!!!!!!!!!!!!! BUBBLE SORT LINKED LIST  ///////////////////////


int main() {
	node* head, * tail, *head1, *tail1;
	head = tail = head1 = tail1 = NULL;

	insertAtEnd(head, tail, 3);
	insertAtEnd(head, tail, 2);
	insertAtEnd(head, tail, 1);
	insertAtEnd(head, tail, 5);
	insertAtEnd(head, tail, 8);
	insertAtEnd(head, tail, 7);
	insertAtEnd(head, tail, 6);
	insertAtEnd(head, tail, 0);

	printLL(head);
	// head = mergeSort(head);
	bubbleSort(head);
	printLL(head);


	// insertAtEnd(head1, tail1, 2);
	// insertAtEnd(head1, tail1, 4);
	// insertAtEnd(head1, tail1, 6);
	// insertAtEnd(head1, tail1, 8);

	// printLL(head);
	// printLL(head1);
	// head = mergeLL(head, head1);
	// printLL(head);

	return 0;
}
















