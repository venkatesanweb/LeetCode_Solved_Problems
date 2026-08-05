class Solution {
public:
    string stringHash(string s, int k) {
        int sum=0;
        int temp=k;
        string ans = "";
        for(int i=0;i<s.size();i++){
            int val = s[i]-'a';
            sum+=val;
            temp--;
            if(temp==0){
                int alpha = sum%26;
                char ch ='a'+alpha;
                ans+=((ch));
                temp=k;
                sum=0;
            }
        }
        return ans;
    }
};
