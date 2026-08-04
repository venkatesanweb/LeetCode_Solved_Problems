class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        vector<int> vc;
        int co1=0,co2=0;
        sort(nums1.begin(),nums1.begin());
        sort(nums2.begin(),nums2.begin());
        int idx=0;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    co1++;
                    break;
                }
            }
        }
        for(int i=0;i<nums2.size();i++){
            for(int j=0;j<nums1.size();j++){
                if(nums2[i]==nums1[j]){
                    co2++;
                    break;
                }
            }
        }
        vector<int> ans = {co1,co2};
        return ans;
    }
};
