class Solution {
public:
    int getLeastFrequentDigit(int n) {
        map<int,int> mp;
        while(n!=0){
            int dig = n%10;
            mp[dig]++;
            n/=10;
        }
        int mini =INT_MAX;
        for(auto val : mp){
            int ele = val.second;
            mini = min(mini,ele);
        }
        int minval =INT_MAX;
        for(auto val : mp){
            int ele = val.first;
            if(mini==val.second){
                // int ele = val.second
                minval=min(minval,ele);
            }
        }
        return minval;

    }
};
