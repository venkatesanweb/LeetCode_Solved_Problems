class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int n = piles.size();
        int r = n;
        int sum=0;
        for(int i=0;i<n/3;i++){
            sum+=piles[r-2];
            r-=2;
        }
        return sum;
    }
};
