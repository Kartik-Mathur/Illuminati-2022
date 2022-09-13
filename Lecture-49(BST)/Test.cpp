#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

class node {
public:
	int data;
	node* left, *right;
	node(int d) {
		data = d;
		left = right = NULL;
	}
};

node* insertInBST(node* root, int d) {
	// base case
	if (!root) {
		root = new node(d);
		return root;
	}

	// recursive case
	if (root->data >= d) {
		root->left = insertInBST(root->left, d);
	}
	else {
		root->right = insertInBST(root->right, d);
	}
	return root;
}

node* createBST() {
	node* root = NULL;

	int data;
	cin >> data;

	while (data != -1) {
		root = insertInBST(root, data);

		cin >> data;
	}
	return root;
}

void preorder(node* root) {
	if (!root) return;
	cout << root-> data << " ";
	preorder(root->left);
	preorder(root->right);
}

void inorder(node* root) {
	if (!root) return;
	inorder(root->left);
	cout << root -> data << " ";
	inorder(root->right);
}

void postorder(node* root) {
	if (!root) return;
	postorder(root->left);
	postorder(root->right);
	cout << root->data << " ";
}

void LevelOrderTraversal(node* root) {
	queue<node* > q;
	q.push(root);
	q.push(NULL);

	while (!q.empty()) {
		node* f = q.front();
		q.pop();

		if (f) {
			cout << f->data << " ";
			if (f->left) q.push(f->left);
			if (f->right) q.push(f->right);
		}
		else {
			cout << endl;
			if (!q.empty()) q.push(NULL);
		}
	}
}

node* searchBST(node* root, int key) {
	// base case
	if (!root) return NULL;

	// recursive case
	if (root->data == key) {
		return root;
	}
	else if (root->data >= key) {
		return searchBST(root->left, key);
	}
	else {
		return searchBST(root->right, key);
	}
}

node* ArrayToBST(int *a, int s, int e) {
	// base case
	if (s > e) return NULL;

	// recursive case
	int m = (s + e) / 2;
	node* root = new node(a[m]);
	root->left = ArrayToBST(a, s, m - 1);
	root->right = ArrayToBST(a, m + 1, e);

	return root;
}


int height(node* root) {
	if (!root) return 0;

	return max(height(root->left), height(root->right)) + 1;
}

bool isBalanced(node* root) {
	// base case
	if (!root) return true;

	// recursive case
	int left_height = height(root->left);
	int right_height = height(root->right);

	if (abs(left_height - right_height) <= 1
	        and isBalanced(root->left) == true
	        and isBalanced(root->right) == true) {
		return true;
	}
	else {
		return false;
	}
}

class LinkedList {
public:
	node* head;
	node* tail;
};

LinkedList BSTtoLL(node* root) {
	LinkedList l;
	// base case
	if (!root) {
		l.head = l.tail = NULL;
		return l;
	}

	// recursive case
	if (root->left and !root->right) {
		LinkedList left = BSTtoLL(root->left);
		left.tail->right = root;
		l.head = left.head;
		l.tail = root;
		return l;
	}
	else if (!root->left and root->right) {
		LinkedList right = BSTtoLL(root->right);
		root->right = right.head;
		l.head = root;
		l.tail = right.tail;
		return l;
	}
	else if (!root->left and !root->right) {
		l.head = l.tail = root;
		return l;
	}
	else {
		LinkedList left = BSTtoLL(root->left);
		LinkedList right = BSTtoLL(root->right);
		left.tail->right = root;
		root->right = right.head;
		l.head = left.head;
		l.tail = right.tail;
		return l;
	}
}

void printLL(node* head) {
	while (head) {
		cout << head->data << "-->";
		head = head->right;
	}
	cout << "NULL\n";
}


int main() {
	node* root = NULL;

	// root = createBST();
	int a[] = {1, 3, 4, 6, 7, 8, 10, 13, 14};
	int n = sizeof(a) / sizeof(int);

	root = ArrayToBST(a, 0, n - 1);

	preorder(root);
	cout << endl;
	inorder(root);
	cout << endl;
	postorder(root);
	cout << endl;
	LevelOrderTraversal(root);

	if (isBalanced(root)) {
		cout << "Balanced hai\n";
	}
	LinkedList l = BSTtoLL(root);
	printLL(l.head);

	return 0;
}
















