class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int> vc(2);
        int com=0;
        int idxm=0;
        for(int i=0;i<mat.size();i++){
            int co=0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1) co++;
            }
            if(co>com){
                com=co;
                idxm=i;
            }
        }
        vc[0]=idxm;
        vc[1]=com;
        return vc;
    }
};
