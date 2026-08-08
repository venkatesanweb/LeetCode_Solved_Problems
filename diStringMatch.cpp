class Solution {
public:
    vector<int> diStringMatch(string s) {
        int low =0;
        int high=s.length();
        int n = high;
        vector<int> arr(n+1);
        for(int i=0;i<n;i++){
            if(s[i]=='I'){
                arr[i]=low;
                low++;
            }
            else{
                arr[i]=high;
                high--;
            }
        }
        arr[n]=low;
        return arr;
    }
};
