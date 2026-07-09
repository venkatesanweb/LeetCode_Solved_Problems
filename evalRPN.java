class Solution {
    public int evalRPN(String[] to) {
        Stack<Integer> st = new Stack<>();
        int ans =0;
        for(int i=0;i<to.length;i++){
            String ch = to[i];
            if(ch.equals("+") || ch.equals("-") || ch.equals("*") || ch.equals("/")){
                int curr = st.pop(),past = st.pop();
                switch(ch){
                    case "+" : st.push(past+curr);break;
                    case "-" : st.push(past-curr);break;
                    case "*" : st.push(past*curr);break;
                    case "/" : st.push(past/curr);break;
                }
            }
            else{
                int val = Integer.parseInt(ch);
                st.push(val);
            }
        }
        return st.peek();
    }
}
