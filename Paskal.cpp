class Solution {
public:
vector<int> Paskal(int n){
    vector<int> vc;
    int ans=1;
    vc.push_back(ans);
    for(int i=1;i<n;i++){
        ans=ans*(n-i);
        ans=ans/i;
        vc.push_back(ans);
    }
    return vc;
}
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans;
        for(int i=1;i<=n;i++){
            ans.push_back(Paskal(i));
        }
        return ans;
    }
};
