class Solution {
    public int minOperations(int[] nums) {
        int ans=0;
        int res=nums[0];
        for(int i=1;i<nums.length;i++){
            if(res>=nums[i]){
                 ans+=res-nums[i]+1;
                // nums[i]=ans;
                res++;
            }
            else res=nums[i];
            
        }
        return ans;
    }
}
