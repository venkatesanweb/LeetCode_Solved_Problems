class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> vc(26,0);
        for(char ch : sentence){
            vc[ch-'a']++;
        }
        for(int i=0;i<26;i++){
            if(vc[i]==0) return false;
        }
        return true;
    }
};
