class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int co=0;
        int sum=0;
        for(int i=1;i<=n*n;i++){
            sum+=w;
            if(sum<=maxWeight) co++;
            else break;
        }
        return co;
    }
};
