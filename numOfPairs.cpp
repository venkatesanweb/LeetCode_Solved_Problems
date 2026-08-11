class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int n = nums.size();
        int co=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j){
                    string val = nums[i]+nums[j];
                    // cout<<val<<"  ";
                    if(val==target) co++;
                }
            }
        }
        return co;
    }
};
