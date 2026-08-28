class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int conntect =-1;
        for(int i=1;i<edges.size();i++){
            if(edges[i][1]==edges[i-1][1]){
                conntect=edges[i][1];
            }
            else if(edges[i][0]==edges[i-1][1]){
                conntect=edges[i][0];
            }
        }
        return conntect;
    }
};
