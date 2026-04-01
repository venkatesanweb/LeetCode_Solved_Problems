class Solution {
public:
bool prime(int n){
    if(n<=1) return false;
    if(n==2) return true;
    for(int i=2;i<n;i++){
        if(n%i==0) return false;
    }
    return true;
}
    bool checkPrimeFrequency(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int val : nums){
            mp[val]++;
        }
        for(auto it : mp){
            if(prime(it.second)) return true;
        }
        return false;

    }
};
