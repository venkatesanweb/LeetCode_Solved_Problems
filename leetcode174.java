class Solution {
    public int calculateMinimumHP(int[][] dungeon) {
        for(int i = dungeon.length-1;i>=0;i--){
            for(int j = dungeon[0].length-1;j>=0;j--){
                if(i == dungeon.length-1 && j == dungeon[0].length-1){
                    if(dungeon[i][j] > 0)
                        dungeon[i][j] = 0;
                }
                if(i==dungeon.length-1 && j+1<=dungeon[0].length-1){
                    dungeon[i][j] = dungeon[i][j+1] + dungeon[i][j];
                    if(dungeon[i][j]>0)
                        dungeon[i][j] = 0;
                }
                else if(j==dungeon[0].length-1 && i+1<=dungeon.length-1){
                    dungeon[i][j] = dungeon[i+1][j] + dungeon[i][j];
                    if(dungeon[i][j]>0)
                        dungeon[i][j] = 0;
                }
                else{
                    int temp1 = 0, temp2 = 0;
                    if(i+1<=dungeon.length-1 && j+1<=dungeon[0].length-1){
                        temp1 = dungeon[i+1][j];
                        temp2 = dungeon[i][j+1];
                    }
                    dungeon[i][j] = dungeon[i][j] + Math.max(temp1,temp2);
                    if(dungeon[i][j]>0)
                        dungeon[i][j] = 0;
                }
            }
        }
        return Math.abs(dungeon[0][0])+1;
    }     
}
