class Solution {
public:
    string decodeMessage(string key, string message) {
        map<char,char>mp;
        char ch = 'a';
        for(int i=0;i<key.size();i++){
            char temp = key[i];
            if(temp!=' '&& mp.find(temp)==mp.end()){
                mp[key[i]]=ch++;
            }
        }
        string ans ="";
        for(int i=0;i<message.size();i++){
            char temp = message[i];
            if(temp==' '){
                ans+=" ";
            }
            else
                ans+=mp[temp];
        }
        return ans;
    }
};
