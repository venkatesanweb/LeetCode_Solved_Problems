class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        map<string,int> mp;
        int n = responses.size();
        for(int i=0;i<n;i++){
            set<string> st(responses[i].begin(),responses[i].end());
            for(string val : st){
                mp[val]++;
            }
        }
        int maxi = INT_MIN;
        string s ="";
        for(auto it : mp){
            int frq =it.second;
            if(frq>maxi){
                maxi=it.second;
                s = it.first;
            }
        }
        return s;
    }
};
