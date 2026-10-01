class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        for(char ch : s){
            
            if(!st.empty() && (st.top()==(ch+32) ||st.top()==(ch-32))){
               st.pop();
            }
            else{
                st.push(ch);
            }
        }
        string ans="";
        while(!st.empty()){
            char ch =st.top();
            ans+=ch;
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
