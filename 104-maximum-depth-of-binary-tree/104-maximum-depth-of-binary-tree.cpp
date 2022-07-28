class Solution {
public:
    int depth(TreeNode* root)
    {
        if(root==nullptr) return 0;
        int left=depth(root->left);
        int right=depth(root->right);
        return max(left,right)+1;
        
        
    }
    int maxDepth(TreeNode* root) {
        int ans=depth(root);
        return ans;
    }
};