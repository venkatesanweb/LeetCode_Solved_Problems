class Solution {
public:
    int pivotInteger(int n) {
        if(n==1) return 1;
        int left=1,right=n;
        int leftsum=left++,rightsum=right--;
        while(left<=right){
            if(leftsum<rightsum){
                leftsum+=left;
                left++;
            }
            else if(leftsum>rightsum){
                rightsum+=right;
                right--;
            }
            else{
                if(leftsum==rightsum && left==right) return left;
                leftsum+=left;
                left++;
                rightsum+=right;
                right--;
            }
        }
        return -1;
        
    }
};
