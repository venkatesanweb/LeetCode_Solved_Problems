class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int n = nums.size()/2;
        double ans = INT_MAX;
        while(n--){
            int mini=INT_MAX;
            int minid=-1;
            int maxi=INT_MIN;
            int maxid=-1;
            for(int i=0;i<nums.size();i++){
                if(mini>nums[i]) {
                    mini=nums[i];
                    minid=i;
                }
                if(maxi<nums[i]) {
                    maxi=nums[i];
                    maxid=i;
                }
            }
            if(minid>maxid){
                nums.erase(nums.begin()+minid);
                nums.erase(nums.begin()+maxid);
            }
            else{
                nums.erase(nums.begin()+maxid);
                nums.erase(nums.begin()+minid);
            
            }
            double avg = (maxi+mini)/2.0;
            ans=min(ans,avg);
        }
        return ans;
    }
};
