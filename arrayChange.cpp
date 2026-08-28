class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {

        unordered_map <int,int> mp;

        for(int i = 0; i<nums.size(); i++)
        {
            mp.insert({nums[i],i});
        }

        for(int i = 0; i<operations.size(); i++){
          auto it = mp.find(operations[i][0]);
          nums[it->second] = operations[i][1];
          int idx = it->second;
          mp.erase(operations[i][0]);
          mp.insert({operations[i][1], idx});
        }
        return nums;
    }
};
