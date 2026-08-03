class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int prd =1;
        int temp=n;
        while(temp!=0){
            int dig = temp%10;
            sum+=dig;
            // if(dig!=0)/
                prd*=dig;
            temp/=10;
        }
        if((sum+prd)==n) return true;
        if(n%(sum+prd)==0) return true;
        return false;
    }
};
