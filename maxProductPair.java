class Solution {
    public int[] maxProductPair(int[] nums, int target) {
        HashMap<Integer,Integer>map=new HashMap<>();
        int n=nums.length;
        for(int i=0;i<n;i++){
            map.put(nums[i],i);
        }
        int r=-1;
        int c=-1;
        int max=Integer.MIN_VALUE;
        for(int i=0;i<n;i++){
            int a=nums[i];
            int b=target-a;
            if(map.containsKey(b)){
                if(a>b){
                    int p=a*b;
                    if(max<p){
                        max=p;
                        r=i;
                        c=map.get(b);
                    }
                }
            }
        }
        return max==Integer.MIN_VALUE? new int[]{-1,-1}:new int[]{r,c};
    }
}
