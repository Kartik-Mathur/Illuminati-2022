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

void mirror(node* root) {
	if (!root) return;

	swap(root->left, root->right);
	mirror(root->left);
	mirror(root->right);
}

node* levelwiseCreate() {
	int data;
	cout << "Enter data for root: ";
	cin >> data;
	if (data == -1) {
		return NULL;
	}
	queue<node*>q;
	node* root = new node(data);
	q.push(root);
	while (!q.empty()) {
		node* f = q.front();
		q.pop();

		cout << "Enter children of " << f->data << ": ";
		int l, r;
		cin >> l >> r;
		if (l != -1) {
			f->left = new node(l);
			q.push(f->left);
		}
		if (r != -1) {
			f->right = new node(r);
			q.push(f->right);
		}
	}
	return root;
}

///////////////////////// TREE RIGHT VIEW ////////////////////////////////////
void rightViewHelper(node* root, int cl, int &mx) {
	// base case
	if (!root) return;

	// recursive case
	if (cl > mx) {
		cout << root->data << " ";
		mx = cl;
	}
	rightViewHelper(root->right, cl + 1, mx);
	rightViewHelper(root->left, cl + 1, mx);
}

void rightView(node* root) {
	int cl = 0;
	int mx = -1;

	rightViewHelper(root, cl, mx);
}
///////////////////////// TREE RIGHT VIEW ////////////////////////////////////


///////////////////////// TREE TOP VIEW ////////////////////////////////////
// void topView(node* root,int )

void findLevel(node* root, int &mi, int &mx, int cl) {
	if (!root) return;

	mi = min(mi, cl);
	mx = max(mx, cl);

	findLevel(root->left, mi, mx, cl - 1);
	findLevel(root->right, mi, mx, cl + 1);

}

bool printLevelNode(node* root, int level, int cl) {
	// base case
	if (!root) return false;
	// recursive case
	if (level == cl) {
		cout << root->data << " ";
		return true;
	}
	bool kyaLeftSeMilla = printLevelNode(root->left, level, cl - 1);
	if (kyaLeftSeMilla == true) {
		return true;
	}
	bool kyaRightSeMilla = printLevelNode(root->right, level, cl + 1);
	return kyaRightSeMilla;
}

void topView(node* root) {
	int mi = INT_MAX;
	int mx = INT_MIN;
	findLevel(root, mi, mx, 0);
	cout << "Max level: " << mx << endl;
	cout << "Min level: " << mi << endl;

	for (int level = mi ; level <= mx ; level++) {
		if (level < 0) {
			bool ans = printLevelNode(root->left, level, -1);
			if (ans == false)
				printLevelNode(root->right, level, 1);
		}
		else if (level > 0 ) {
			bool ans = printLevelNode(root->right, level, 1);
			if (ans == false)
				printLevelNode(root->left, level, -1);
		}
		else
			cout << root->data << " ";
	}
	cout << endl;
}
///////////////////////// TREE TOP VIEW ////////////////////////////////////


// 8 10 1 -1 -1 6 4 -1 15 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
int main() {
	node* root = createBT();
	topView(root);
	// node* root = levelwiseCreate();
	// preorder(root);
	// cout << endl;
	// inorder(root);
	// cout << endl;
	// postorder(root);
	// cout << endl;
	LevelOrderTraversal(root);
	// topView(root);
	// mirror(root);
	// LevelOrderTraversal(root);
	// rightView(root);
	return 0;
}
















