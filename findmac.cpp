class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cou=0;
        int maxi=0;
        for(int val:nums){
            if(val==1){
                cou++;
            }
            else{
             cou=0; 
            }
            maxi=max(maxi,cou);
        }
        return maxi;
    }
};
