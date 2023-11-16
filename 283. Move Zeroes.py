class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        times = 0
        i = 0
        while(True):
            if(nums[i] == 0):
                nums.pop(i)
                times += 1
            elif(nums[i] != 0):
                i += 1
            if(i >= len(nums)):
                break
        for t in range(times):
            nums.append(0)
        return nums
