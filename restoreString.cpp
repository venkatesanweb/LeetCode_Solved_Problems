class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        vector<char> ch(s.size());
        for(int i=0;i<s.length();i++){
            ch[indices[i]] = s[i];
            // cout<<ch[i]<<"  "<<i<<endl;
        }
        string ans ="";
        for(char temp : ch) ans+=temp;
        return ans;
    }
};
