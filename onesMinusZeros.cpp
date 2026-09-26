class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        vector<int> x(n,0),y(m,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                x[i]+=grid[i][j];
                y[j]+=grid[i][j];
            }
        }
        vector<vector<int>> ans(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans[i][j]=x[i]+y[j]-(n-x[i])-(m-y[j]);
            }
        }
        return ans;
    }
};
