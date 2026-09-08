class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        vector<string> vc;
        for(int i=1;i<n;i++){
            for(int j=i+1;j<=n;j++){
                if(gcd(i, j) == 1){
                    string s = to_string(i)+"/"+to_string(j);
                    vc.push_back(s);
                }
            }
        }
        return vc;
    }
};
