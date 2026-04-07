class Solution {
public:
    int findMin(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        while(left<right){
            int mid =(left+right)-1;
            if(nums[right]>nums[mid]) right=mid;
            else{
                left=mid+1;
            }
        }
        return nums[left];
    }
};
