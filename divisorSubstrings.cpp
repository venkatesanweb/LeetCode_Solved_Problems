class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int co=0;
        string strnum = to_string(num);
        for(int i=0;i<strnum.size();i++){
            int numtemp = 0;
            int temp = k;
            int idx=i;
            while(temp-- && i+k<=strnum.size()){
                numtemp=numtemp*10 + strnum[idx++]-'0';
            }
            if(numtemp>0 &&num%numtemp==0) co++;
            cout<<numtemp<<" ";
        }
        return co;
    }
};
