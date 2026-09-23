class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        int cox=0,coy=0;
        for(char ch : s){
            if(ch==x) cox++;
            if(ch==y) coy++;
        }
        string ans="";
        while(coy--){
            ans+=y;
        }
        for(char ch : s){
            if(ch==y) continue;
            if(ch==x) continue;
            ans+=ch;
        }
        while(cox--){
            ans+=x;
        }
        return ans;
    }
};
