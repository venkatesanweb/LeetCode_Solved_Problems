class Solution {
    public int countNegatives(int[][] grid) {
        int co=0;
        for (int [] arr:grid){
            Arrays.sort(arr);
            for(int val:arr){
                if(val<0) co++;
                else break;
            }
        }
        return co;
    }
}
