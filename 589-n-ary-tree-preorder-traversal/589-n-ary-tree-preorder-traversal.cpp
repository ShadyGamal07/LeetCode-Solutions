class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> ans;
        helper(root, ans);
        return ans;
    }
    void helper(Node* root, vector<int>& ans)
    {
        if(root==NULL) return; //Base condition
        ans.push_back(root->val); //Pre-order Traversal (Root-Left-Right)
        for(auto i:root->children) helper(i,ans);
    }
};