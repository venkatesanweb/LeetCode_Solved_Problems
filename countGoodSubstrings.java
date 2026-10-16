class Solution {
    public int countGoodSubstrings(String s) {
        int co=0;
        int n = s.length();
        for(int i=0;i<=n-3;i++){
            
            String sub = s.substring(i,i+3);
            
            Set<Character> st = new HashSet<>();
            for(char ch : sub.toCharArray()){
                st.add(ch);
            }
            System.out.println(st);
            if(st.size()==3) co++;
        }
        
        return co;
    }
}
