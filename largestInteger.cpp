class Solution {
public:
    int largestInteger(int n, int s) {
        int range = pow(10,n);
        for(int i=range-1;i>=0;i--){
            int temp=i;
            int val=0;
            while(temp!=0){
                val+=temp%10;
                temp/=10;
            }
            if(val==s){
                return i;
            }
        }
        return -1;
    }
};
