class Solution {
public:
    int countMonobit(int n) {
        int co=1;
        int x=1;
        while(x<=n){
            co++;
            x=(x+1)*2-1;
        }
        return co;
    }
};
