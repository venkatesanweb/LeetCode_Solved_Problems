class Solution {
public:
    int getLucky(string s, int k) {
        string sum="";
        for(int i=0;i<s.size();i++){
            sum=sum+to_string(s[i]-'a'+1);
        }
        // cout<<sum<<"   ";
        int sums=0;
        for(int i=0;i<k;i++){
            sums=0;
            for(char ch : sum){
                sums+=(ch-'0');
            }
            sum=to_string(sums);
        }
        return sums;
    }
};
