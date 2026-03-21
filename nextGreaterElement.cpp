class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int val : nums1){
            int idx = -1;
            for(int j = 0; j < nums2.size(); j++){
                if(nums2[j] == val){
                    idx = j;
                    break;
                }
            }
            int nextGreater = -1;
            for(int k = idx + 1; k < nums2.size(); k++){
                if(nums2[k] > val){
                    nextGreater = nums2[k];
                    break;
                }
            }

            ans.push_back(nextGreater);
        }
        return ans;
    }
};
