class Solution {
    public int maxRepeating(String sequence, String word) {
        int co=0;
        StringBuilder ans = new StringBuilder(word);
        StringBuilder temp = new StringBuilder(sequence);
        while(temp.indexOf(ans.toString())!=-1){
            co++;
            ans.append(word);

        }
        return co;
    }
}
