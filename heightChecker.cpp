class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>vc=heights;
        sort(vc.begin(),vc.end());
        int co=0;
        for(int i=0;i<vc.size();i++){
            if(vc[i]!=heights[i]){
                co++;
            }
        }
        return co;
    }
};
