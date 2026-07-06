class Solution {
    public boolean rotateString(String s, String goal) {
        if(s.length()!=goal.length()){
            return false;
        }
        int freq[] = new int[26];
        int n = s.length();
        for(int i=0;i<n;i++){
            freq[s.charAt(i)-'a']++;
            freq[goal.charAt(i)-'a']--;
        }
        for(int count=0;count<freq.length;count++){
            if(freq[count]!=0){
                return false;
            }
        }
        return true;
    }
}
