class Solution {
public:
    TreeNode* traversal(TreeNode* root, int val){
        if(root == NULL || root->val == val) return root;
        TreeNode* left = traversal(root->left, val);
        TreeNode* right = traversal(root->right, val);
        if(left != NULL) return left;
        return right;
    }

    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* result = NULL;
        result = traversal(root, val);
        return result;
    }
};
