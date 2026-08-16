class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int idx=-1;
        int mini = INT_MAX;
        for(int i=0;i<capacity.size();i++){
            int val = capacity[i];
            if(val<mini && val>=itemSize){
                idx=i;
                mini=val;
            }

        }
    
        return idx;
    }
};
