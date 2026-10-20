class Solution {
    public char repeatedCharacter(String s) {
        Set<Character> st = new HashSet<>();
        for(char ch : s.toCharArray()){
            if(st.contains(ch)) return ch;
            st.add(ch);
        }
        return ' ';

    }
}
