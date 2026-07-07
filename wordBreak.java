class Solution {
    public boolean wordBreak(String s, List<String> wordDict) {
        boolean dp[]= new boolean[s.length()+1];
        dp[0]=true;
        for(int i=1;i<=s.length();i++){
            for(int j=0;j<i;j++){
                if(dp[j]==true){
                    String sub = s.substring(j,i);
                    if(wordDict.contains(sub)){
                        dp[i]=true;
                        break;
                    }
                }
            }
        }
        return dp[s.length()];
    }
}
