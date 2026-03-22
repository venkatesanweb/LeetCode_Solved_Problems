class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        int co=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
             bool s=false;
            for(int j=0;j<n;j++){
                if(arr[i]==arr[j] && i!=j){
                    s=true;
                    break;
                }
            
            }
            if(!s){
                co++;
            }
            if(co==k) return arr[i];
        }
        return "";
    }
};
