class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int co=0;
        int sum=0;
        for(int val : costs){
            sum+=val;
            if(sum>coins){
                return co;
            }
            else{
                co++;
            }
        }
        return co;
    }
};
