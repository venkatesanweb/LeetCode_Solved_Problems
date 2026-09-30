class Solution {
public:
    string trimTrailingVowels(string s) {
        string ans ="";
        bool flg=true;
        for(int i=s.size()-1;i>=0;i--){
            char ch = s[i];
            if(flg && (ch=='a' || ch=='e' ||ch=='i' || ch=='o' || ch=='u')) continue;
            else{
                flg=false;
                ans+=s[i];
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
