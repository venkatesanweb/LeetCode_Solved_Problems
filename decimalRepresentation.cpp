class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int> vc;
        int i=0;
        while(n){
            int dig = n%10;
            if(dig!=0){
                vc.push_back(dig*pow(10,i));
            }
            i++;
            n/=10;
        }
        reverse(vc.begin(),vc.end());
        return vc;
    }
};
