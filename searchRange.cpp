class Solution {
public:
int largestArray(vector<int>&vc,int target,bool s){
    int left=0;
    int right=vc.size()-1;
    int ans=-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(vc[mid]==target){
            ans=mid;
            if(!s){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        else if(vc[mid]>target){
            right=mid-1;
        }
        else{
            left=mid+1;
        }
    }
    return ans;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2);
        ans[1]=(largestArray(nums,target,false));
        ans[0]=(largestArray(nums,target,true));
        return ans;
    }
};
