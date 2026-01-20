class Solution {
public:
    bool isVowel(char ch){
        if(ch == 'a'|| ch == 'e'|| ch == 'i' || ch == 'o' || ch == 'u'){
            return true;
        }
        return false;
    }

    int maxFreqSum(string s) {
        unordered_map<char , int> mpp;
        for(char ch : s){
            mpp[ch]++;
        }
        int maxV = 0;
        int maxC = 0;
        for(auto it : mpp){
            if(isVowel(it.first)){
                maxV = max(maxV , it.second);
            }
            else{
                maxC = max(maxC , it.second);
            }
        }
        return maxV + maxC;
    }
};
