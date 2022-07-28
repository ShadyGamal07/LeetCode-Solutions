class Solution {
private:
	int sum(TreeNode* root, bool isLeft) {
        if(!root) return 0;
		if (!root->left && !root->right) return isLeft? root->val : 0;
        return sum(root->left, true) + sum(root->right, false);
	}
public:
	int sumOfLeftLeaves(TreeNode* root) {
		if (!root) return 0;
		return sum(root, false);
	}
};