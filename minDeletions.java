class Solution {
    public int minDeletions(int[] nums) {
        int co=0;
        for(int i=1;i<nums.length;i++){
            if(nums[i]==nums[i-1]) co++;
        }
        return co;
    }
}
