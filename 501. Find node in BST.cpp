class Solution {
private:
    static bool compare(const pair<int,int>& a, const pair<int,int>& b){
        return a.second > b.second;
    }

    void searchBST(TreeNode* cur, unordered_map<int,int>& map){
        if(cur == NULL) return;
        map[cur->val]++;
        searchBST(cur->left, map);
        searchBST(cur->right, map);
        return ;
    }

public:
    vector<int> findMode(TreeNode* root) {
        unordered_map<int, int> map;
        vector<int> result;
        if(root == NULL) return result;
        searchBST(root, map);
        vector<pair<int, int>> vec(map.begin(), map.end());
        sort(vec.begin(), vec.end(), compare);
        result.push_back(vec[0].first);
        for(int i = 1; i < vec.size(); i++){
            if(vec[i].second == vec[0].second){
                result.push_back(vec[i].first);
            }
            else break;
        }
        return result;
    }
};
