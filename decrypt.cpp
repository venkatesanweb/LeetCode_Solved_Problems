class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        
        if(k==0){
            vector<int> vc(code.size(),0);
            return vc;
        }
        else if(k>0){
            vector<int> vc(code.size());
            int n=code.size();
            for(int i=0;i<code.size();i++){
                int temp=k;
                int sum=0;
                int idx=i+1;
                while(temp--){
                    sum+=code[idx%n];
                    idx++;
                }
                vc[i]=sum;
            }
            return vc;
        }
        else{
            vector<int> vc(code.size(),0);
            int n = code.size();
            for(int i=n-1;i>=0;i--){
                int idx=i-1;
                int sum=0;
                int temp=k;
                while(temp++){
                    int index = (idx % n + n) % n;
                    sum+=code[index];
                    idx--;
                }
                vc[i]=sum;
            }
            return vc;
        }
    }
};
