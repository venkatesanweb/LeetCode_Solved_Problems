class Solution {
    public int[] dailyTemperatures(int[] temperatures) {
        Stack<Integer> st = new Stack<>();
        int [] ans = new int[temperatures.length];
        int j=0;
        for(int i=0;i<temperatures.length;i++){
          while(!st.isEmpty() && temperatures[i]>temperatures[st.peek()]){
            int poped = st.pop();
            ans[poped] =i - poped;
          }
          st.push(i);
        }
        return ans;
    }
}
