class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxmum=*max_element(candies.begin(),candies.end());
        vector<bool> res;
        for(int val:candies){
            if((extraCandies+val)>=maxmum){
                res.push_back(true);
            }
            else{
                res.push_back(false);
            }
        }
        return res;
    }
};
