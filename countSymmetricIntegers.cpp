class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int co=0;
        for(int i=low;i<=high;i++){
            int num=i;
            // int co=0;
            string s = to_string(i);
            int len = s.length();
            if(len%2==1) continue;
            int sum1=0,sum2=0;
            int temp=len/2;
            while(temp!=0){
                sum1=sum1+num%10;
                num/=10;
                temp--;
            }
            while(num!=0){
                sum2+=num%10;
                num/=10;
            }
            if(sum1==sum2) co++;
        }
        return co;
    }
};
