class Solution {
    public int[] findErrorNums(int[] nums) {
        Set<Integer> sc=new HashSet<>();
        int valss=0;
        int c=0;
        for(int val:nums){
            if(!sc.contains(val)){
                sc.add(val);
            }
            else{
                valss=val;
            }
        }
        int n=nums.length;
        int totalsum=n*(n+1)/2;
        int actualsum=0;
        for(int val:nums) actualsum+=val;
        int vals=totalsum-(actualsum-valss);
        return new int []{valss,vals};
    }
}
