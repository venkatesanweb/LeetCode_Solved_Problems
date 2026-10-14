class Solution {
    public List<List<Integer>> fourSum(int[] nums, int target) {
        Set<List<Integer>> tp = new HashSet<>();
        int n = nums.length;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                Set<Integer> st = new HashSet<>();
                for(int k=j+1;k<n;k++){
                    long val =(long) target- nums[i]-nums[j]-nums[k];
                    if(val>=Integer.MIN_VALUE && val<=Integer.MAX_VALUE){
                    if(st.contains((int)val)){
                        List<Integer> lis = new ArrayList<>();
                        lis.add(nums[i]);
                        lis.add(nums[j]);
                        lis.add(nums[k]);
                        lis.add((int)val);
                        Collections.sort(lis);
                        tp.add(lis);
                    }
                    
                    st.add(nums[k]);
                    
                    }

                }
            }
        }
        List<List<Integer>> ans = new ArrayList<>();
        for(List<Integer> lp : tp){
            ans.add(lp);
        }
        return ans;
    }
}
