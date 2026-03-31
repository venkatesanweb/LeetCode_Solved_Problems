class Solution {
public:
    bool isThree(int n) {
        int co=0;
        for(int i=1;i<=n;i++){
            if(n%i==0) co++;
        }
        return co==3;
    }
};
