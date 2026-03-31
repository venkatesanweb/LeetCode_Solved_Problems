class Solution {
public:
    int titleToNumber(string s) {
        int sum=0;
        for(char ch :s){
            int ans = ch - 'A'+1;
            sum=sum*26 + ans;
        }
        return sum;
    }
};
