class Solution {
public:
	bool oneHai(TreeNode* root) {
		// base case
		if (!root) {
			return false;
		}

		// recursive case
		bool left = oneHai(root->left);
		bool right = oneHai(root->right);

		if (left == false) {
			root->left = NULL;
		}
		if (right == false) {
			root->right = NULL;
		}

		if (root->val == 0 and left == false and right == false) {
			return false;
		}
		return true;
	}

	TreeNode* pruneTree(TreeNode* root) {
		if (oneHai(root)) return root;
		return NULL;
	}
};













