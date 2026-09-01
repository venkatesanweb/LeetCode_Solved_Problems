class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        set<string> vc;
        for(string s : words){
            int n = s.size();
            for(int i=0;i<n;i++){
                string sum = "";
                for(int j=i;j<n;j++){
                    sum+=s[j];
                    for(string temp : words){
                        if(s!=temp && sum==temp){
                            vc.insert(sum);
                            break;
                        }
                    }
                }
            }
        }
        vector<string> ans(vc.begin(),vc.end());
        return ans;

    }
};
