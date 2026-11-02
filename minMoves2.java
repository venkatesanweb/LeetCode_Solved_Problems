class Solution {
    public int minMoves2(int[] nums) {
        Arrays.sort(nums);
        int co =0;
        int avg = nums[nums.length/2];
        for(int val : nums){
            co=co +(int) Math.abs(avg-val);
        }
        return co;
    }
}
