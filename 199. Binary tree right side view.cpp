class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*> que;
        if(root != NULL) que.push(root);
        vector<int> result;
        while(!que.empty()){
            int size = que.size();
            int res = 0;
            for(int i = 0; i < size; i++){
                TreeNode* node = que.front();
                que.pop();
                if(i == size - 1) res = node->val;
                if(node->left) que.push(node->left);
                if(node->right) que.push(node->right);
            }
            result.push_back(res);
        }
        return result;
    }
};
