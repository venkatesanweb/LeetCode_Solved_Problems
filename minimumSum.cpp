class Solution {
public:
    int minimumSum(int num) {
        vector<int> number;
        while(num>0){
            int x = num%10;
            number.push_back(x);
            num/=10;
        }
        sort(number.begin(),number.end());
        return (number[0]*10+number[2])+(number[1]*10+number[3]);

    }
};
