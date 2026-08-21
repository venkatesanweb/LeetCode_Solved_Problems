class Solution {
public:
    int possibleStringCount(string word) {
        int idx=1;
        int n = word.size();
        int minpos =1;
        while(idx<n){
            if(word[idx]==word[idx-1]){
                minpos++;
            }
            idx++;
        }
        return minpos;

    }
};
