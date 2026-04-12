class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
       vector<int>mp(51,0);
       int xors=0;
       for(int val : nums) mp[val]++;
       for(int i=1;i<=50;i++){
        if(mp[i]==2) xors^=i;
       }
       return xors;
    }
};
