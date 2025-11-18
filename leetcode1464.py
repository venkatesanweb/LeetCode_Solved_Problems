class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        max=0
        for i in range(0,len(nums)):
            for j in range(i+1,len(nums)):
                a=(nums[i]-1)*(nums[j]-1)
                if(a>max):
                    max=a
        return max
        
