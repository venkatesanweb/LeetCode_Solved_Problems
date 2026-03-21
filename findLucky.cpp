class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int> mp;
        for(int val:arr){
            mp[val]++;
        }
        int maxi=INT_MIN;
        for(auto it : mp){
            if(it.first==it.second){
                maxi=max(maxi,it.first);
            }
        }
        return maxi==INT_MIN ? -1 : maxi;
    }
};
