class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int co=0;
        for(int val : nums){
            int evco=0;
            while(val>0){
                int dig = val%10;
                evco++;
                val/=10;
            }
            if(evco%2==0)
            co++;
        }
        return co;
    }
};
