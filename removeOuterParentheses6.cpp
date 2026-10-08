class Solution {
    public String removeOuterParentheses(String s) {
        String res="";
        int level=0;
        for(char ch : s.toCharArray()){
            if(ch=='('){
                if(level>0) {res+=ch;}
                level++;
            }else if(ch==')'){
                level--;
                if(level>0) {res+=ch;}
            }
        }
        return res;
    }
}
