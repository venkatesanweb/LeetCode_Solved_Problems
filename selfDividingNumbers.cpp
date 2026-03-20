class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> vc;
        for(int i=left;i<=right;i++){
            int num=i;
            bool s=true;
            while(num>0){
                int dig=num%10;
                if(dig==0 || i%dig!=0){
                    s=false;
                    break;
                }
                num/=10;
            }
            if(s){
                vc.push_back(i);
            }
        }
        return vc;
    }
};
