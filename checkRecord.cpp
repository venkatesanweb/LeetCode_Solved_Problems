class Solution {
public:
    bool checkRecord(string s) {
        int flga=0;
        int lco=0;
        // char pre=' ';
        for(int i=0;i<s.size();i++){
            if(s[i]=='A') flga++;
            if(s[i]=='L'){
                int j=i;
                while(j<s.size() && s[j]=='L'){
                    lco++;
                    j++;
                }
                if(lco>=3) return false;
                else{
                    lco=0;
                }
            }
        }
        if(lco>=3 || flga>=2) return false;
        return true;
        
    }
};
