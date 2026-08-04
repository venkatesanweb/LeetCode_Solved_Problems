class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int> st(nums.begin(),nums.end());
        int i=1;
        int n = nums.size()-1;
        while(n>=0){
            if(!st.count(i*k)){
                return i*k;
            }
            n--;
            i++;
        }
        return i*k;
    }
};
