class Solution {
public:
    bool canBeEqual(vector<int>& a, vector<int>& b) {
        if(a.size()!=b.size()) return false;
        for(int i=0;i<a.size();i++){
            bool ans = false;
            for(int j=0;j<b.size();j++){
                if(a[i]==b[j]){
                    b[j]=-1;
                    ans=true;
                    break;
                }
            }
            if(!ans) return false;
        }

        return true;
    }
};
