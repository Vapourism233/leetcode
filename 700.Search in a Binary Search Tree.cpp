class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == NULL || root->val == val) return root;
        TreeNode* result = NULL;
        if(root->val > val) result = searchBST(root->left, val);
        if(root->val < val) result = searchBST(root->right, val);
        return result;
    }
};
