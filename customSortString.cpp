class Solution {
public:
    string customSortString(string order, string s) {
        map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        string ans = "";
        // map<char,int> rds;
        for(char &ch : order){
            if(mp.find(ch)!=mp.end()){
                ans.append(mp[ch],ch);
                mp.erase(ch);
            }
        }
        for(auto &it : mp){
            ans.append(it.second,it.first);
        }
        return ans;
    }
};
