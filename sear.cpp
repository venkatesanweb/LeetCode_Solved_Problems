class Solution {
public:
    bool search(vector<int>& vc, int target) {
        int left=0;
    int right=vc.size()-1;
    while(left<=right){
        int mid = (left+right)/2;
        if(vc[mid]==target)return true;
        if(vc[mid]==vc[left] && vc[mid]==vc[right]){
            left++;
            right--;
        }
        else if(vc[left]<=vc[mid]){
            if(vc[left]<=target && vc[mid]>target) right=mid-1;
            else left=mid+1;
        }
        else{
            if(vc[mid]<target && vc[right]>=target) left=mid+1;
            else right=mid-1;
        }
    }
    return false;
    }
};
