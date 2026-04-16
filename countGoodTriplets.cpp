class Solution {
public:
    int countGoodTriplets(vector<int>& vc, int a, int b, int c) {
        int co=0;
        int n=vc.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    int val1=abs(vc[i]-vc[j]);
                    int val2=abs(vc[j]-vc[k]);
                    int val3=abs(vc[i]-vc[k]);
                    if(val1<=a && val2<=b && val3<=c) co++;
                }
            }
        }
        return co;
    }
};
