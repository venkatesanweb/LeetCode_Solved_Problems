class Solution {
    public int uniquePathsWithObstacles(int[][] vc) {
        int dp[] = new int[vc[0].length];
        for(int i=0;i<vc.length;i++){
            int temp[]= new int[vc[i].length];
            for(int j=0;j<vc[i].length;j++){
                if(vc[i][j]==1) temp[j]=0;
                else if(i==0 && j==0) temp[j]=1;
                else{
                    int left =0 ;
                    int up =0;
                    if(i>0) up=dp[j];
                    if(j>0) left=temp[j-1];
                    temp[j]=up+left;
                }
            }
            dp=temp;
        }
        return dp[vc[0].length-1];
    }
}
