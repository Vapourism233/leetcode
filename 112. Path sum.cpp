class Solution {
public:
    bool traversal(TreeNode* node, int count){
        if(!node->left && !node->right && count == 0) return true;
        if(!node->left && !node->right) return false;

        if(node->left){
            if(traversal(node->left, count - node->left->val)) return true;
        }
        if(node->right){
            if(traversal(node->right, count - node->right->val)) return true;
        }
        return false;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == NULL) return false;
        return traversal(root, targetSum - root->val);
    }
};
