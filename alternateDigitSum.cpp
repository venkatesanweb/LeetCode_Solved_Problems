class Solution {
public:
    int alternateDigitSum(int n) {
        int i=0;
        int sum=0;
        string s = to_string(n);
        reverse(s.begin(),s.end());
        n=stoi(s);
        while(n>0){
            if(i==0){
                sum+=n%10;
                i=1;
            }
            else{
                sum-=n%10;
                i=0;
            }
            n/=10;
        }
        return sum;
    }
};
