class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<int> vc;
        map<int,int> mp;
        for(int val : bulbs) mp[val]++;
        for(auto it : mp){
            if(it.second%2==1){
                vc.push_back(it.first);
            }
        }
        return vc;
    }
};
