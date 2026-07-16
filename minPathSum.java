class Solution {
    public int minPathSum(int[][] grid) {
        // if(grid.length==0) return 0;
        int pre[] = new int [grid[0].length];
        for(int i=0;i<grid.length;i++){
            int curr[] =new int[grid[i].length];
            for(int j=0;j<grid[i].length;j++){
                if(i==0 && j==0) curr[j] =grid[i][j];
                else{
                    int up = grid[i][j];
                    if(i>0){
                        up+=pre[j];
                    }
                    else up+=(int)1e7;
                    int left = grid[i][j];
                    if(j>0){
                        left+=curr[j-1];
                    }
                    else left+=(int)1e7;
                    curr[j]=Math.min(up,left);
                }
            }
            pre=curr;
        }
        return pre[grid[0].length-1];
    }
}

// class Solution {
//     public int minPathSum(int[][] grid) {
//         int pre[] = new int[grid[0].length];
//         for(int i = 0; i < grid.length; i++){
//             int curr[] = new int[grid[0].length];
//             for(int j = 0; j < grid[0].length; j++){
//                 if(i == 0 && j == 0){
//                     curr[j] = grid[i][j];
//                 }
//                 else{
//                     int up = grid[i][j];
//                     if(i > 0)
//                         up += pre[j];
//                     else
//                         up += (int)1e7;
//                     int left = grid[i][j];
//                     if(j > 0)
//                         left += curr[j-1];
//                     else
//                         left += (int)1e7;
//                     curr[j] = Math.min(up, left);
//                 }
//             }
//             pre = curr;
//         }
//         return pre[grid[0].length-1];
//     }
// }
