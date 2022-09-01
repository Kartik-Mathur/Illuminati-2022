#include <iostream>
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

int countNodes(node* root) {
	// base case
	if (!root) return 0;

	// recursive case
	return countNodes(root->left) + countNodes(root->right) + 1;
}

int heightBT(node* root) {
	// base case
	if (!root) return 0;

	// recursive case
	return max(heightBT(root->left), heightBT(root->right)) + 1;
}

int diameter(node* root) {
	// base case
	if (!root) return 0;

	// recursive case
	int op1, op2, op3;
	op1 = op2 = op3 = INT_MIN;

	op1 = heightBT(root->left) + heightBT(root->right);
	op2 = diameter(root->left);
	op3 = diameter(root->right);

	return max(op1, max(op2, op3));

}

class Pair {
public:
	int height;
	int dia;
};

Pair fastDiameter(node* root) {
	Pair p;
	// base case
	if (!root) {
		p.height = p.dia = 0;
		return p;
	}
	// recursive case
	Pair left = fastDiameter(root->left);
	Pair right = fastDiameter(root->right);

	p.height = max(left.height, right.height) + 1;
	int op1 = left.height + right.height;
	int op2 = left.dia;
	int op3 = right.dia;

	p.dia = max(op1, max(op2, op3));
	return p;
}

int main() {
	node* root = createBT();
	preorder(root);
	cout << endl;
	inorder(root);
	cout << endl;
	postorder(root);
	cout << endl;
	cout << "Nodes: " << countNodes(root) << endl;
	cout << "Height: " << heightBT(root) << endl;
	cout << "diameter: " << diameter(root) << endl;

	Pair ans = fastDiameter(root);
	cout << "Height: " << ans.height << endl;
	cout << "diameter: " << ans.dia << endl;
	return 0;
}
















