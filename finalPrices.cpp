class Solution {
public:
    vector<int> finalPrices(vector<int>& nums) {
        int n = nums.size();
        vector<int>vc(n);
        for(int j=0;j<n;j++){
            bool flag = false;
            for(int i=j+1;i<n;i++){
                if(nums[j]>=nums[i]){
                    vc[j] = nums[j]-nums[i];
                    flag=true;
                    break;
                }
            }
            if(!flag){
                vc[j]=nums[j];
            }
        }
        return vc;
    }
};
