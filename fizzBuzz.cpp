class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> vc;
        for(int i=1;i<=n;i++){
            if(i%3==0 && i%5==0){
                vc.push_back("FizzBuzz");
            }
            else if(i%3==0){
                vc.push_back("Fizz");
            }
            else if(i%5==0){
                vc.push_back("Buzz");
            }
            else{
                string ans = to_string(i);
                vc.push_back(ans);
            }
        }
        return vc;
    }
};
