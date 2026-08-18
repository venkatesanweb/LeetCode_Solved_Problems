class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i=0;i<=nums.size()-k;i++){
            unordered_set<int> st;
            for(int j =i;j<i+k;j++) {
                st.insert(nums[j]);
            }
            for(int x : st) {
                mp[x]++;
            }
        }
        int maxi = INT_MIN;
        for(auto it : mp) {
            if(it.second == 1) {
                maxi = max(maxi, it.first);
            }
        }
        return maxi==INT_MIN ? -1 : maxi;
    }
};
