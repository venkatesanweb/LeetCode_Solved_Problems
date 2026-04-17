class Solution {
public:
    int minElement(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int val = nums[i];
            int sum=0;
            while(val>0){
                sum+=val%10;
                val/=10;
            }
            nums[i]=sum;
        }
        return *min_element(nums.begin(),nums.end());
    }
};
