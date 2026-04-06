class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int ans =0;
        int i=0;
        int range=1;
        while(ans!=k){
            if(i<arr.size() && arr[i]==range){
                i++;
                range++;
                continue;
            }
            else{
                range++;
                ans++;
            }
        }
        return range-1;
    }
};
