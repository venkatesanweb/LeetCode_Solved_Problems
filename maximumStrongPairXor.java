class Solution {
    public int maximumStrongPairXor(int[] nums) {
        int nas =0;
        int max =Integer.MIN_VALUE;
        for(int i=0;i<nums.length;i++){
            for(int j=0;j<nums.length;j++){
                int ans = Math.abs(nums[i]-nums[j]);
                int min = Math.min(nums[i],nums[j]);
                if(min>=ans){
                    max= Math.max(max,nums[i]^nums[j]);
                }
            }
        }
        return max;
    }
}
