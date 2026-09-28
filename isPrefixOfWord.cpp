class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        if(sentence.length()<searchWord.length()) return -1;
        int space=0;
        if(sentence.substr(0,searchWord.length())==searchWord) return space+1;
        int i=0;
        while(i <sentence.length()-searchWord.length()){
            if(sentence[i]==' '){
                space++;
                i++;
                if(sentence.substr(i,searchWord.length())==searchWord) return space+1;
            }
            i++;
        }
        return -1;
    }
};
