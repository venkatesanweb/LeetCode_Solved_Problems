class Solution {
public:
    int peakIndexInMountainArray(vector<int>& vc) {
        int left=0;
        int right=vc.size()-1;
        while(left<right){
            int mid = left+(right-left)/2;
            if(vc[mid]<vc[mid+1]){
                left=mid+1;            
            }
            else{
                right=mid;
            }
        }
        return left;
    }
};
