// HouseRobber - 3.cpp

class Pair {
public:
	// root node rob kari ya nhi vo hai yeh dono
	int robbery_haan;
	int robbery_nahi;
};

class Solution {
public:

	Pair solve(TreeNode* root) {
		Pair ans;
		// base case
		if (!root) {
			ans.robbery_haan = ans.robbery_nahi = 0;
			return ans;
		}
		// recursive case
		Pair left = solve(root->left);
		Pair right = solve(root->right);

		ans.robbery_haan = root->val + left.robbery_nahi + right.robbery_nahi;
		ans.robbery_nahi = max(left.robbery_nahi, left.robbery_haan) +
		                   max(right.robbery_nahi, right.robbery_haan);
		return ans;
	}

	int rob(TreeNode* root) {
		Pair ans = solve(root);
		return max(ans.robbery_haan, ans.robbery_nahi);
	}
};









