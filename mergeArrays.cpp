class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> vc;
        int n = nums1.size(),m=nums2.size();
        int i=0,j=0;
        while(i<n && j<m){
            if(nums1[i][0]==nums2[j][0]){
                vector<int> temp = {nums1[i][0],nums1[i][1]+nums2[j][1]};
                i++;
                j++;
                vc.push_back(temp);
            }
            else if(nums1[i][0]>nums2[j][0]){
                vc.push_back(nums2[j]);
                j++;
            }
            else{
                vc.push_back(nums1[i]);
                i++;
            }
        }
        while(i<n){
            vc.push_back(nums1[i++]);
        }
        while(j<m){
            vc.push_back(nums2[j++]);
        }
        return vc;
    }
};
