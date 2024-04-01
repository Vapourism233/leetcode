class Solution {
private:
    vector<int> vec;
    void traversal(TreeNode* root){
        if(root == NULL) return ;
        traversal(root->left);
        vec.push_back(root->val);
        traversal(root->right);
    }

public:
    int getMinimumDifference(TreeNode* root) {
        traversal(root);
        if(vec.size() < 2) return 0;
        int result = INT_MAX;
        for(int i = 1; i < vec.size(); i++){
            result = min(abs(vec[i] - vec[i-1]), result);
        }
        return result;
    }
};
