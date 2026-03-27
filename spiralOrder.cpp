class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& vcs) {
        vector<int>vc;
        int left=0,top=0;
        int right=vcs[0].size()-1;
        int bottom=vcs.size()-1;
        while(left<=right && top<=bottom){
            for(int i=left;i<=right;i++){
                vc.push_back(vcs[top][i]);
            }
            top++;
            for(int i=top;i<=bottom;i++){
                vc.push_back(vcs[i][right]);
            }
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    vc.push_back(vcs[bottom][i]);
                }
                bottom--;
            }
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    vc.push_back(vcs[i][left]);
                }
                left++;
            }
        }
        return vc;
    }
};
