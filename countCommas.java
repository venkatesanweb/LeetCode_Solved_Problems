class Solution {
public:
    int countCommas(int n) {
        int co=0;
        for(int i=1000;i<=n;i++) co++;
        return co;
    }
};
