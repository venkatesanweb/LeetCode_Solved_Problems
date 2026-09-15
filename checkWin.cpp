class Solution {
public:
    string check(vector<vector<int>> &grid){
        string a = checkWin(grid, 1);
        string b = checkWin(grid, -1);

        if(a == "A" || b == "A") return "A";
        if(a == "B" || b == "B") return "B";
        return "Draw";
    }
    string checkWin(vector<vector<int>> &grid, int num){
        int countD1 = 0, countD2 = 0;
        for(int i = 0; i < 3; i++){
            int countRow = 0, countColumn = 0;
            for(int j = 0; j < 3; j++){
                if(grid[i][j] == num) countRow++;
                if(grid[j][i] == num) countColumn++;
                if(grid[i][j] == num && (i == j)) countD1++;
                if(grid[i][j] == num && ((i+j) == 2)) countD2++;
            }
            if(countRow == 3 || countColumn == 3){
                if(num == 1) return "A";
                if(num == -1) return "B";
            }
        }
        if(countD1 == 3 || countD2 == 3) {
            if(num == 1) return "A";
            if(num == -1) return "B";
        }
        return "Pending";
    }

    string tictactoe(vector<vector<int>>& moves) {
        vector<vector<int>> grid(3, vector<int>(3, 0));
        for(int i = 0; i < moves.size(); i++){
            if(i%2 == 0) grid[moves[i][0]][moves[i][1]] = 1;
            else grid[moves[i][0]][moves[i][1]] = -1;
        }
        if(moves.size() < 9) {
            if(moves.size()%2 == 0) return checkWin(grid, -1);
            else return checkWin(grid, 1);
        }
        return check(grid);
    }
};
