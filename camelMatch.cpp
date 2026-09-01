class Solution {
public:
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        vector<bool> vc;
        for(string s : queries){
            bool flg = true;
            int idx=0;
            for(char ch : s){
                if(idx<pattern.size() && ch==pattern[idx]){
                    idx++;
                    // cout<<idx<<" ";
                    continue;
                }
                else if(ch>='a' && ch<='z') continue;
                else{
                    cout<<ch<<" ";
                    flg=false;
                    break;
                }
            }
            
            vc.push_back(flg && idx==pattern.size());
            
        }
        return vc;
    }
};
