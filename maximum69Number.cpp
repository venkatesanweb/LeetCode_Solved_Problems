class Solution {
public:
    int maximum69Number (int num) {
        vector<int> vc;
        string s = to_string(num);
        vc.push_back(num);
        for(int i=0;i<s.size();i++){
            if(s[i]=='6') s[i]='9';
            else s[i]='6';
            vc.push_back(stoi(s));
            s=to_string(num);
        }
        int maxel=*max_element(vc.begin(),vc.end());
        return maxel;
    }
};
