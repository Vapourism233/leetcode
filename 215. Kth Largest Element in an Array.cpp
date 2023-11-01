#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        vector<int> sortedNums = nums;
        sort(sortedNums.begin(), sortedNums.end());
        return sortedNums[sortedNums.size()-k];
    }
};

