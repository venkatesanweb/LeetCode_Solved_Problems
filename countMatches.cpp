class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int co=0;
        int idx=0;
        if(ruleKey=="color"){
            idx=1;
        }
        else if(ruleKey=="name"){
            idx=2;
        }
        for(vector<string> vc : items){
            if(ruleValue==vc[idx]) co++;
        }
        return co;
    }
};
