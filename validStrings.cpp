class Solution {
public:
    void help(int n,vector<string> &st,int idx,string s){
        if(idx==n){
            st.push_back(s);
            return;
        }
        s.push_back('1');
        help(n,st,idx+1,s);
        s.pop_back();

        if(s.empty() || s.back()=='1'){
            s.push_back('0');
            help(n,st,idx+1,s);
            s.pop_back();
        }
    }
    vector<string> validStrings(int n) {
        vector<string> st;
        help(n,st,0,"");
        return st;
    }
};
