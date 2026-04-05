class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> vc(nums.size());
        int j=1;
        int i=0;
        for(int val : nums){
            if(val%2==0 && i<nums.size()){
                vc[i]=val;
                i+=2;
            }
            else if(val%2!=0 && j<nums.size()){
                vc[j]=val;
                j+=2;
            }
        }
        return vc;
    }
};
