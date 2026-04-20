class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i=n;i<=100;i++){
            int muldig=1;
            int temp=i;
            while(temp>0){
                muldig=muldig*(temp%10);
                temp/=10;
            }
            if(muldig%t==0) return i;
        }
        return -1;
    }
};
