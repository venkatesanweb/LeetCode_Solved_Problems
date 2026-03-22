class Solution {
public:
    int percentageLetter(string s, char letter) {
        double co=0;
        for(char ch : s) {
            if(ch==letter) co++;
        }
        return (co/s.size())*100;
    }
};
