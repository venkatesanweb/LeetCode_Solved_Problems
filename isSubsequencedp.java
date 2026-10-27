class Solution {
    private static boolean help(int idxs,int idxt,String s,String ts){
        if(idxs>=s.length()) return true;
        if(idxt>=ts.length()) return false;
        if(s.charAt(idxs)==(ts.charAt(idxt))){
            idxs++;
        }
        return help(idxs,idxt+1,s,ts);
    }
    public boolean isSubsequence(String s, String t) {
        return help(0,0,s,t);
    }
}
