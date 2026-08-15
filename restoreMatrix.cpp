class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) 
    {
        int m = rowSum.size();
        int n = colSum.size();
        
        vector<vector<int>> matrix(m, vector<int>(n, 0));
        int i = 0, j = 0;
        
        while (i < m && j < n) 
        {
            int val = min(rowSum[i], colSum[j]);
            matrix[i][j] = val;
            
            rowSum[i] -= val;
            colSum[j] -= val;

            if (!rowSum[i])   i++;
            if (!colSum[j])  j++;
            
        }
        
        return matrix;
    }
};
