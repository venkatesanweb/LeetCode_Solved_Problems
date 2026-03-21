class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(vector<int> & vc :image){
            reverse(vc.begin(),vc.end());
            for(int i=0;i<vc.size();i++){
                vc[i]=1-vc[i];
            }
        }
        return image;
    }


};
