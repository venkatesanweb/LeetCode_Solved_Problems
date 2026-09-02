class Solution {
public:
    string removeTrailingZeros(string num) {
        int idx=num.size();
        for(int i=idx-1;i>=0;i--){
            if(num[i]!='0'){
                idx=i;
                break;
            }
        }
        string ans=num.substr(0,idx+1);
        return ans;
    }
};
