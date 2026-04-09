class Solution {
public:
    int splitNum(int num) {
        vector<int> vc;
        while(num>0){
            vc.push_back(num%10);
            num/=10;
        }
        sort(vc.begin(),vc.end());
        int i=0,j=vc.size()-1;
        int n1=0;
        int n2=0;
        for(int i=0;i<vc.size();i++){
            if(i%2==0) n1=n1*10+vc[i];
            else n2=n2*10+vc[i];
        }
        return n1+n2;
    }
};
