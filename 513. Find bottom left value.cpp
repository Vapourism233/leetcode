class Solution {
public:
    int maxDepth = INT_MIN;
    int result; 
    void traversal(TreeNode* root, int depth){
        if(root->left == NULL && root->right == NULL){
            if(depth > maxDepth){
                maxDepth = depth;
                result = root->val;
            }
        }
        if(root->left){
            depth++;
            traversal(root->left, depth);
            depth--;
        }
        if(root->right){
            depth++;
            traversal(root->right, depth);
            depth--;
        }
        return;
    }
    int findBottomLeftValue(TreeNode* root) {
        traversal(root, 0);
        return result;
    }
};
