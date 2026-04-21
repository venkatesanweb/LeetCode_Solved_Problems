class Solution {
public:
    int calPoints(vector<string>& nums) {
       int sum=0;
        vector<int> vc;
        for(string ch : nums){
            if(ch=="C"){
                vc.pop_back();
            }
            else if(ch=="D"){
                vc.push_back((vc[vc.size()-1])*2);
            }
            else if(ch=="+"){
                vc.push_back(vc[vc.size()-1]+vc[vc.size()-2]);
            }
            else{
                vc.push_back(stoi(ch));
            }
        }
        for(int val : vc) sum+=val;
        return sum;
    }
};
