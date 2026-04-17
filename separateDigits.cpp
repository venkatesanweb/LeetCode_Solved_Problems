class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> vc;
        int i=0;
        for(int val : nums){
            string s =to_string(val);
             for(char ch : s){
                vc.push_back(ch - '0');
            }
            // vc.push_back(val);
        }
        return vc;
    }
};
