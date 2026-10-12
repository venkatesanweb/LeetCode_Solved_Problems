class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> temp(1,1);
        ans.push_back(temp);
        for(int i=1;i<numRows;i++){
            vector<int> vc(i+1);
            vc[0]=1;
            vc[vc.size()-1]=1;
            for(int j=1;j<i;j++){
                vc[j]=ans[i-1][j]+ans[i-1][j-1];

            }
            ans.push_back(vc);
            
        }
        return ans;
    }
};
