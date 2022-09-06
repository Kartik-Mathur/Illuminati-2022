class node {
public:
	TreeNode* root;
	bool isOnePresent;
};

class Solution {
public:
	node SaafKaroTree(TreeNode* root) {
		// base case
		if (!root) {
			return {NULL, false};
		}

		// recursive case
		node left = SaafKaroTree(root->left);
		node right = SaafKaroTree(root->right);

		if (!left.isOnePresent) {
			root->left = NULL;
		}
		if (!right.isOnePresent) {
			root->right = NULL;
		}

		if (root->val == 0 and !left.isOnePresent and !right.isOnePresent) {
			return {NULL, false};
		}

		return {root, true};
	}

	TreeNode* pruneTree(TreeNode* root) {
		node ans = SaafKaroTree(root);
		return ans.root;
	}
};













