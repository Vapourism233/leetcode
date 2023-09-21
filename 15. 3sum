from itertools import combinations, permutations
import numpy as np
class Solution(object):
    def threeSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        # lt = []
        # add = 0
        # ls1 = set(combinations(nums,3))
        # ls1 = list(ls1)
        # for i in range(len(ls1)):
        #     ls1[i] = list(ls1[i])
        # for ls in ls1:
        #     for i in range(len(ls)):
        #         add += ls[i]
        #     if(add == 0):
        #         lt.append(ls)
        #     add = 0
        # for i in range(len(lt)):
        #     lt[i] = sorted(lt[i])
        # pin = []
        # for i in range(len(lt)):
        #     for j in range(len(lt)-i-1):
        #         if(lt[i] == lt[i+j+1]):
        #             pin.append(i)
        # pin = list(set(pin))
        # l = 0
        # pin = sorted(pin)
        # for i in pin:
        #     lt.pop(i-l)
        #     l += 1
        # lt = sorted(lt)
        # return lt
        if len(nums) <= 2:
            return []

        result = set()  

        nums = sorted(nums) 

        for x in range(len(nums)-2):
            b = x+1          
            e = len(nums)-1  
            while b < e: 
                val = nums[x]+ nums[b] + nums[e]
                if val == 0: 
                    result.add(tuple(sorted((nums[x],nums[b],nums[e])))) 

                    b += 1
                    e -= 1

                if val < 0: 
                    b += 1
                if val > 0: 
                    e -= 1
        return result
