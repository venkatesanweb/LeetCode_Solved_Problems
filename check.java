class Solution {
    public boolean check(int[] nums) {
        int co=0;
        for(int i=1;i<nums.length;i++){
            if(nums[i]>=nums[(i-1)]) continue;
            else
            {
                co++;
            }
        }
        if(nums[nums.length-1]>nums[0]) co++;
        return co==0 || co==1;
    }
}
