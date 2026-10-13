class Solution {
    public int xorBeauty(int[] nums) {
        int ans=nums[0];
        int n = nums.length;
        for(int i=1;i<n;i++){
            ans^=nums[i];
        }
        return ans;
    }
}
