class Solution {
public:
    int minBitFlips(int start, int goal) {
        int x=start^goal;
        int res=0;
        while(x!=0)
        {
            res=res+(x&1);
            x>>=1;
        }
        return res;
    }
};
