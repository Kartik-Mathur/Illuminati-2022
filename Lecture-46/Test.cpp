class Solution {
public:
	TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
		if (!root) return NULL;

		// if root node is equals to any of the node p and q
		// answer will be root node
		if (root -> val == p->val or root->val == q->val) return root;

		TreeNode* left = lowestCommonAncestor(root->left, p, q);
		TreeNode* right = lowestCommonAncestor(root->right, p, q);

		if (left != NULL and right != NULL) return root;
		if (left != NULL) return left;
		return right;
	}
};