#include <iostream>
#include <queue>
using namespace std;

class node {
public:
	int data;
	node* left, *right;
	node(int d): data(d), left(NULL), right(NULL) {}
};

// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
node* createBT() {
	// base case
	int data;
	cin >> data;
	if (data == -1) {
		return NULL;
	}

	// recursive case

	// root node ko create kardo
	node* root = new node(data);

	root->left = createBT(); // createBT() will return address of LST's root node
	root->right = createBT(); // createBT() will return address of RST's root node
	return root;
}

void printAtLevelK(node* root, int level, int k) {
	if (!root) return;

	if (level == k) {
		cout << root->data << " ";
		return;
	}

	printAtLevelK(root->left, level + 1, k);
	printAtLevelK(root->right, level + 1, k);
	return;
}

int printAtDistK(node* root, int k, int target) {
	if (!root) {
		return -1;
	}

	// recursive case
	if (root->data == target) {
		printAtLevelK(root, 0, k);
		return 0;
	}

	int DL = printAtDistK(root->left, k, target);
	if (DL != -1) {
		if (DL + 1 == k) {
			cout << root->data << " ";
		}
		else {
			printAtLevelK(root->right, 0, k - DL - 2);
		}
		return DL + 1;
	}

	int DR = printAtDistK(root->right, k, target);
	if (DR != -1) {
		if (DR + 1 == k) {
			cout << root->data << " ";
		}
		else {
			printAtLevelK(root->left, 0, k - DR - 2);
		}
		return DR + 1;
	}
	return -1;
}

int main() {
	node* root = createBT();

	printAtDistK(root, 2, 6);

	return 0;
}















