class Solution {
    public String minRemoveToMakeValid(String s) {
        int open=0,close=0,flag=0;
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='('){
                open++;
                flag++;
            }
            else if(s.charAt(i)==')' && flag>0){
                close++;
                flag--;
            }
        }
        int  k = Math.min(open,close);
        open=k;
        close=k;
        StringBuilder ans = new StringBuilder();
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='('){
                if(open>0)
                {
                    ans.append('(');
                    open--;
                }
                continue;
            }
            if(s.charAt(i)==')'){
                if(close>0 && close>open){
                    ans.append(')');
                    close--;
                }
                continue;
            }
            ans.append(s.charAt(i));
        }
        // String val=
        return ans.toString();
    }
}
