class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int i=0,j=0;
        int ans=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        while(i<g.size() && j<s.size()){
            if(s[j]>=g[i]){
                cout<<s[i]<<" ";
                ans++;
                j++;
                i++;
            }
            else if(g[i]>s[j])
                j++;
            
            
        }
        return ans;
    }
};
