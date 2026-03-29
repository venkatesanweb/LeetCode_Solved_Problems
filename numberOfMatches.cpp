class Solution {
public:
    int numberOfMatches(int n) {
        int sum=0;
        while(n!=1){
            if(n%2==0){
                sum+=n/2;
                n/=2;
            }
            else{
                int val=(n-1)/2;
                sum+=val;
                n=val+1;
            }
        }
        return sum;
    }
};
