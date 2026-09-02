class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans ="";
        int i=word1.size();
        int j = word2.size();
        int idx1=0;
        int idx2=0;
        while(idx1<i && idx2<j){
            ans.push_back(word1[idx1++]);
            ans.push_back(word2[idx2++]);
        }
        while(idx1<i){
            ans.push_back(word1[idx1++]);

        }
        while(idx2<j){
            ans.push_back(word2[idx2++]);
        }
        return ans;
    }
};
