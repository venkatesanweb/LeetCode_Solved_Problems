class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int maxi=0;
        
        for(string s : strs){
            bool ans= false;
            for(int i=0;i<s.size();i++){
                
                if(s[i]>='0' && s[i]<='9'){
                    continue;
                }
                else{
                    ans=true;
                    break;
                }
            }
            if(ans){
                maxi=max((int)s.size(),maxi);
            }
            else{
                maxi=max(stoi(s),maxi);
            }
        }
        return maxi;

    }
};
