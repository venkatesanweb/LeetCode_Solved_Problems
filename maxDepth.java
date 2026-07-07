class Solution {
    public int maxDepth(String s) {
        int co =0;
        int maxi =0;
        for(int i=0;i<s.length();i++){
            char ch = s.charAt(i);
            if(ch=='('){
                co++;
                maxi = Math.max(maxi,co);
            }
            else if(ch==')'){
                co--;
            }
        }
        return maxi;
    }
}
