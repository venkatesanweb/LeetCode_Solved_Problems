class Solution {
public:
    int countDigits(int num) {
        int co=0;
        int temp=num;
        while(temp>0){
            int dig=temp%10;
            if(num%dig==0){
                co++;
            }
            temp/=10;
        }
        return co;
    }
};
