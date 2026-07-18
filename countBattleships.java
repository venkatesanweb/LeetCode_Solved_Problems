class Solution {
    public int countBattleships(char[][] board) {
        int c = 0;
        int m= board.length;
        int n = board[0].length;
        boolean[][] vist = new boolean[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='X' && !vist[i][j]){
                    help(board,i,j,vist);
                    c++;
                }
            }
        }
        return c;
    }
    private void help(char[][] board,int m,int n,boolean vist[][]){
        if (m < 0 || n < 0 || m >= board.length || n >= board[0].length)
            return;
        if (vist[m][n] || board[m][n] == '.')
            return;
        vist[m][n]=true;
        board[m][n]='.';
        help(board,m,n+1,vist);
        help(board,m+1,n,vist);
        
    }
}
