class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        vector<int> vc;
        int temp=k;
        int pre=nums[0];
        vc.push_back(pre);
        temp--;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==pre && temp>0){
                temp--;
                pre=nums[i];
                vc.push_back(pre);
            }
            else{
                if(temp==0 && pre==nums[i]) continue;
                else{
                    temp=k-1;
                    pre=nums[i];
                    vc.push_back(pre);
                }
            }
        }
        return vc;
    }
};
