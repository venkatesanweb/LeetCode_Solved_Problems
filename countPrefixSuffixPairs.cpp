class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int co=0;
        for(int i=0;i<words.size();i++){
            for(int j=i+1;j<words.size();j++){
                string root = words[i];
                string finds = words[j];
                if((finds).find(root)!=-1){
                    bool flg = true;
                    for(int k=0;k<root.size();k++){
                        if(root[k]!=finds[k]) {
                            flg=false;
                            break;
                        }
                    }
                    // int k=0;
                    int rev = finds.size()-1;
                    for(int k=root.size()-1;k>=0;k--){
                        if(root[k]!=finds[rev] || rev<0){
                            flg=false;
                            break;
                        }
                        rev--;
                    }
                    if(flg) co++;
                }
            }
        }
        return co;
    }
};
