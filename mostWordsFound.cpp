class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int co=0;
        for(string s: sentences){
            int maxi =1;
            for(int i=0;i<s.size();i++){
                if(s[i]==' ') maxi++;
            }
            co=max(co,maxi);
        }
        return co;
    }
};
