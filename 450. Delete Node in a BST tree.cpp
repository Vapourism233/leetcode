class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL) return root;

        if(root->val == key){
            if(root->left == NULL && root->right == NULL){
                return NULL;
            }
            else if(root->left == NULL && root->right != NULL){
                return root->right;
            }
            else if(root->left != NULL && root->right == NULL){
                return root->left;
            }
            else{
                TreeNode* root1 = root->right;
                while(root1->left){
                    root1 = root1->left;
                }
                root1->left = root->left;
                root = root->right;
                return root;
            }
        }
        root->left = deleteNode(root->left, key);
        root->right = deleteNode(root->right, key);

        return root;
    }
};
