class Solution {
public:
    string freqAlphabets(string s) {
        string ans="";
        int n = s.size();
        for(int i=0;i<n;i++){
            if((i+2)<n && s[i+2]=='#'){
                string temp = s.substr(i, 2);
                int num = stoi(temp)-1;
                char ch = 'a'+num;
                ans.push_back(ch);
                i+=2;
            }
            else{
                char ch = 'a' +((s[i]-'0')-1);
                ans.push_back(ch);
            }
        }
        return ans;
    }
};
