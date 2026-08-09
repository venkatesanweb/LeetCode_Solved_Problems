class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int co=0;
        int n = words.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                string temp = words[j];
                reverse(temp.begin(),temp.end());
                // cout<<j<<"  ";
                if(temp==words[i]){
                    co++;
                }
            }
        }
        return co;
    }
};
