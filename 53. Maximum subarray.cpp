#include<iostream>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // int max_so_far = INT_MIN, max_ending_here = 0;
        // int size = nums.size();
        // for (int i = 0; i < size; i++) {
        //     max_ending_here = max_ending_here + nums[i];
        //     if (max_so_far < max_ending_here)
        //         max_so_far = max_ending_here;
    
        //     if (max_ending_here < 0)
        //         max_ending_here = 0;
        // }
        // return max_so_far;
        const int s = nums.size();
        int sum = INT_MIN;
        int count = 0;
        for(int i = 0; i < s; i++){
            count += nums[i];
            sum = max(sum, count);
            if(count <= 0) count = 0;
        }
        return sum;
    }
};
