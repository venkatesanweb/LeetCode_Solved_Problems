class Solution {
public:
    string sortVowels(string s) {
        vector<char> vc;
        for(int i=0;i<s.size();i++){
            char ch = s[i];
            if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U'){
                vc.push_back(ch);
            } 
        }
        sort(vc.begin(),vc.end());
        int idx=0;
        for(int i=0;i<s.size();i++){
            char ch = s[i];
            if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U'){
                s[i]=vc[idx++];
            } 
        }
        return s;
    }
};
