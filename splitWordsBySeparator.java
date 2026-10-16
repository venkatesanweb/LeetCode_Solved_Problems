class Solution {
    public List<String> splitWordsBySeparator(List<String> words, char separator) {
        List<String> ans = new ArrayList<>();
        for(String s : words){
            String temp = "";
            for(int i=0;i<s.length();i++){
                if(s.charAt(i)==separator){
                    if(temp.length()!=0){
                        ans.add(temp);
                        temp = "";
                    }
                    
                }
                else{
                    temp+=s.charAt(i);
                }
            }
            if(temp.length()!=0) ans.add(temp);
        }
        return ans;
    }
}
