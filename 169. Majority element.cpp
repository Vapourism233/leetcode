class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> counts;
        int maxCount = 0;
        int maxValue = 0;
        for(const int num : nums){
            counts[num]++;
        }

        for(auto& count : counts){
            if(maxCount < count.second){
                maxValue = count.first;
                maxCount = count.second;
            }
        }
        return maxValue;
    }
};
