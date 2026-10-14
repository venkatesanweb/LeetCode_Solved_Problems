class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum>9*num) return "";
        string ans;
        while(sum>0){
            int temp = min(9,sum);
            ans+=temp+'0';
            sum-=temp;
        }
        ans.resize(num,'0');
        return ans;
    }
};
