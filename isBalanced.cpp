class Solution {
public:
    bool isBalanced(string num) {
        int odsum=0;
        int evensum=0;
        for(int i=0;i<num.size();i++){
            int digit=num[i]-'0';
            if(i%2!=0) odsum+=digit;
            else{
                evensum+=digit;
            }
        }
        return odsum==evensum;
    }
};
