class Solution {
public:
    int maximumLengthSubstring(string s) {
        // vector<string> vc;
        int n = s.size();
        int maxi=0;
        for(int i=0;i<n;i++){
            array<int,26> count{};
            for(int j=i;j<n;j++){
                int idx = s[j]-'a';
                ++count[idx];
                if(count[idx]>2){
                    break;
                }
                maxi=max(maxi,j-i+1);
            }
        }
        return maxi;

    }
};
