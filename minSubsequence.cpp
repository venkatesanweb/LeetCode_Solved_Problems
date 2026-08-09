class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        vector<int> vc;
        sort(nums.begin(),nums.end());
        int sum = 0;
        for(int val : nums) sum+=val;
        int temp=0;
        for(int i=nums.size()-1;i>=0;i--)
        {
            temp+=nums[i];
            int ans=sum-temp;
            cout<<"  "<<temp<<"   "<<sum;
            vc.push_back(nums[i]);
            if(temp>ans){
                break;
            }
        }
        return vc;
    }
};
