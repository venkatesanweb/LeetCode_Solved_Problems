class Solution {
    public int oddCells(int m, int n, int[][] indices) {
        int ans[][] = new int[m][n];
        for(int q=0;q<indices.length;q++){
            int arr[] = indices[q];
            int i = arr[0];
            int j= arr[1];
            for(int k=0;k<n;k++){
                ans[i][k]=ans[i][k]+1;
            }
            for(int k=0;k<m;k++){
                ans[k][j]=ans[k][j]+1;
            }
        }
        int co=0;
        for(int k=0;k<m;k++){
            for(int l=0;l<n;l++){
                if(ans[k][l]%2==1) co++;
            }
        }
        return co;
    }
}
