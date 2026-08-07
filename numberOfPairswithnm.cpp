class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int co=0;
        int n = nums1.size();
        int m = nums2.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int ele = nums2[j]*k;
                if(nums1[i]%ele==0) co++;
            }
        }
        return co;
    }
};
