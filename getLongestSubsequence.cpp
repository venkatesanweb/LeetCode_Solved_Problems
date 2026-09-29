class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        if(words.size()==1) return words;
        vector<string> vc;
        vc.push_back(words[0]);
        for(int i=1;i<groups.size();i++){
            if(groups[i]!=groups[i-1]){
                // vc.insert(words[i-1]);
                vc.push_back(words[i]);
            }
        }
        // vector<string> ans(vc.begin(),vc.end());
        return vc;
    }
};
