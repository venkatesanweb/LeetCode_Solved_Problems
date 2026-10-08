class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        if(arr.size()==1) return arr[0];
        int co = arr.size()/4;
        int val =0;
        for(int i=0;i<arr.size()-co;i++){
            if(arr[i]==arr[i+co]){
                val=arr[i];
            }
        }
        return val;
        
    }
};
