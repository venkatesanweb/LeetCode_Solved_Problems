class Solution {
public:
    int getfirst(vector<int>& v,int t){
        for(int i=0;i<v.size();i++){
            if(v[i]==t){
                return i;
            }
        }
        return -1;
    }
    int countSpecialIntegers(vector<int>& nums) {
        if(nums.size()==1){
            return 1;
        }
        unordered_set<int> s;
        int total=0;
        for(int i=0;i<nums.size();i++){
            int cnt=0;
            int curr=nums[i];
            if(s.find(curr)!=s.end()){
                continue;
            }
            for(int j=0;j<nums.size();j++){
                if(nums[j]==curr){
                    cnt++;
                }
            }
            int r=0;
            for(int k=0;k<nums.size();k++){
                if(nums[k]==curr){
                    r=k;
                }
            }
            int l=getfirst(nums,curr);
            if((r-l+1) == cnt){
                total++;
            }
            s.insert(curr);
        }
        return total;
    }
};
