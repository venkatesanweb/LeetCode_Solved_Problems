class Solution {
    public int maxAreaOfIsland(int[][] grid) {
        if(grid.length==0) return 0;
        int m = grid.length;
        int n = grid[0].length;
        int a =0;
        boolean vist[][] = new boolean[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1 || !vist[i][j])
                a= Math.max(a,help(grid,i,j,vist));
            }
        }
        return a;
    }
    private int help(int[][] grid,int m,int n,boolean[][] vist){
        if(n<0 || m<0 || n>=grid[0].length || m>=grid.length|| vist[m][n]||grid[m][n]==0){
            return 0;
        }
        vist[m][n]=true;

        return 1+help(grid,m+1,n,vist)+help(grid,m,n+1,vist)+help(grid,m-1,n,vist)+help(grid,m,n-1,vist);
    }
}
