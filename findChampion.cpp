class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int st=0;
        int maxi=0;
        for(int i=0;i<grid.size();i++){
            int co=0;
            for(int j=0;j<grid[i].size();j++){
                if(i!=j && grid[i][j]==1){
                    co++;
                }
            }
            if(co>maxi){
                maxi=co;
                st=i;
            }
        }
        return st;
    }
};
