class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int co=0;
        int n = nums.size();

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int val = nums[j] - nums[i];
                if(val==diff &&  nums[j]!=nums[i]){
                    for(int k=j+1;k<n;k++){
                        int temp = nums[k]-nums[j];
                        if(temp==diff && nums[j]!=nums[k]) co++;
                    }
                }
            }
        }
        return co;
    }
};
