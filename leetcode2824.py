class Solution:
    def countPairs(self, nums: List[int], target: int) -> int:
        co=0
        for i in range(len(nums)):
            for j in range(i+1,len(nums)):
                if(nums[i]+nums[j]<target):
                    co+=1
        return co
        
