#include<iostream>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size() - 1, container = 0;
        while(l != r){
            container = max(container, min(height[l], height[r])*(r-l));
            if(height[l] > height[r]){
                r--;
            }
            else{
                l++;
            }
        }
        return container;
    }
};
