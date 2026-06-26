class Solution {
    public int maxOperations(int[] nums, int k) {
        if(nums==null || nums.length==0) return -1;
        Map<Integer,Integer> mp = new HashMap<>();
        int co =0;
        for(int i=0;i<nums.length;i++){
            int val = k - nums[i];
            if(mp.containsKey(val) && mp.get(val)>0){
                co++;
                mp.put(val,mp.get(val)-1);
            }
            else{
            mp.put(nums[i],mp.getOrDefault(nums[i],0)+1);
            }
        } 
        return co;
    }
}
