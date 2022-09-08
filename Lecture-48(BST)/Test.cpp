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

void printRange(node* root, int k1, int k2) {
	// base case
	if (!root) return;
	// recursive case
	printRange(root->left, k1, k2);
	if (root->data >= k1 and root->data <= k2) {
		cout << root->data << " ";
	}
	printRange(root->right, k1, k2);
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

class Pair {
public:
	int height;
	bool isBalanced;
};

Pair fastBalanced(node* root) {
	Pair p;
	if (!root) {
		p.height = 0;
		p.isBalanced = true;
		return p;
	}

	// recursive case
	Pair left = fastBalanced(root->left);
	Pair right = fastBalanced(root->right);

	p.height = max(left.height, right.height) + 1;
	if (abs(left.height - right.height) <= 1 and left.isBalanced and right.isBalanced) {
		p.isBalanced = true;
	}
	else {
		p.isBalanced = false;
	}
	return p;
}

bool isBST(node* root, int mi = INT_MIN, int mx = INT_MAX) {
	// base case
	if (!root) return true;

	// recursive case
	if (root->data >= mi and root->data <= mx
	        and isBST(root->left, mi, root->data)
	        and isBST(root->right, root->data, mx)) {
		return true;
	}
	return false;
}

int main() {
	node* root = NULL;

	root = createBST();

	preorder(root);
	cout << endl;
	inorder(root);
	cout << endl;
	postorder(root);
	cout << endl;
	LevelOrderTraversal(root);

	node* ans = searchBST(root, 100);
	if (ans) {
		cout << ans->data << "\n";
	}
	else {
		cout << "Key not found\n";
	}

	printRange(root, 4, 10);
	cout << endl;
	if (isBalanced(root)) {
		cout << "Balanced\n";
	}
	else {
		cout << "Not Balanced\n";
	}

	if (isBST(root)) {
		cout << "BST\n";
	}

	return 0;
}















