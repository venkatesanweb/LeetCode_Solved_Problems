class Solution:
    def findMissingElements(self, nums: List[int]) -> List[int]:
        arr=[]
        nums.sort()
        a=nums[0]
        n=nums[len(nums)-1]
        i=0
        while(a!=n):
            if(nums[i]==a):
                a+=1
                i+=1
            else:
                arr.append(a)
                a+=1
        return arr

        
