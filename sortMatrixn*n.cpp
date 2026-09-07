class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        for(int i=0;i<grid.size();i++){
            int len = n-i,idx=0,k=i;
            vector<int> vc(len);
            while( k<n &&idx<n){
                vc[idx]=grid[k][idx];
                idx++;
                k++;
            }
            sort(vc.rbegin(),vc.rend());
            idx=0;
            k=i;
            while(k<n &&idx<n){
                grid[k][idx]=vc[idx];
                k++;
                idx++;
            }
        }
        for(int i=1;i<grid.size();i++){
            int len = n-i,idx=i;
            vector<int> vc(len);
            int k=0;
            int j=0;
            while(k<n && idx<n){
                vc[j]=grid[k][idx];
                k++;
                idx++;
                j++;
            }
            sort(vc.begin(),vc.end());
            k=0;
            idx=i;
            j=0;
            while(k<n && idx<n){
                grid[k][idx]=vc[j++];
                idx++;
                k++;
            }
        }
        return grid;
    }
};
