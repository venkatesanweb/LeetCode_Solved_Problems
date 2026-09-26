class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string>mp;
        for(vector<string> vc :knowledge){
            mp[vc[0]]=vc[1];
        }

        string ans="";
        int st=0;
        bool flg=false;;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                string key="";
                i++;
                // bool flgs=false;
                while(i<s.size() && s[i]!=')'){
                    key+=s[i];
                    i++;
                }
                if(mp.count(key)){
                    ans+=mp[key];
                }
                else{
                    ans+="?";
                }

            }
            else{
                ans+=s[i];
            }
        }   
        return ans;
    }
};
