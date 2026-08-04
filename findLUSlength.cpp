class Solution {
public:
    int findLUSlength(string a, string b) {
        if(a==b) return -1;
        int co=0;
        // for(int i=0;i<a.length();i++){
        //     for(int j=0;j<b.size();j++){
        //         if(a[i]==b[j]){
        //             co++;
        //             break;
        //         }
        //     }
        // }
        return max(a.length(),b.length());
    }
};
