class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        for(int i=0;i<n;i++){
            // int idx=0;
            // int len = n-i;
            vector<int> vc;
            int row=i;
            int col=0;
            while(row<n && col<m){
                vc.push_back(mat[row][col]);
                row++;
                col++;
            }
            sort(vc.begin(),vc.end());
            row=i,col=0;
            int j=0;
            while(row<n && col<m){
                mat[row][col] = vc[j];
                col++;
                row++;
                j++;
            }
        }
        for(int i=1;i<m;i++){
            int row=0;
            int col=i;
            // int len = m-i;
            vector<int>vc;
            int j=0;
            while(row<n && col<m){
                vc.push_back(mat[row][col]);
                row++;
                col++;
                // j++;
            }
            sort(vc.begin(),vc.end());
            j=0,row=0,col=i;
            while(row<n && col<m){
                mat[row][col]=vc[j];
                row++;
                col++;j++;
            }
        }
        return mat;
    }
};
