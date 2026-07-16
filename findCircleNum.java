class Solution {
    public int findCircleNum(int[][] isConnected) {
        int n = isConnected.length;
        boolean [] vist = new boolean[n];
        int co=0;
        for(int i=0;i<n;i++){
            if(!vist[i]){
                dfs(isConnected,vist,i);
                co++;
            }
        }
        return co;
    }
    private void dfs(int [][] grid,boolean[] vist,int cur){
        vist[cur]=true;
        for(int col=0;col<grid.length;col++){
            if(grid[cur][col]==1 && !vist[col]){
                dfs(grid,vist,col);
            }
        }
    }
}
