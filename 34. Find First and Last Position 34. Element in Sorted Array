class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result(2, -1);
        if(nums.empty()) return result;
        int i = 0, j = nums.size() - 1;
        while(j >= i && i < nums.size() && j < nums.size()) {
        	if(nums[i] == target) result[0] = i;
        	if(nums[j] == target) result[1] = j;
        	if(nums[i] < target) i++;
        	if(nums[j] > target) j--;
        	if(result[0] > -1 && result[1] > -1) break;
        }
        return result;
    }
};
