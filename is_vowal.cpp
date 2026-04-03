class Solution {
public:
bool is_vowal(char ch){
    ch = tolower(ch);
    if(ch == 'a' || ch == 'e' || ch =='i' || ch =='o' || ch =='u'){
        return true;
    }
    return false;
}
    int vowelStrings(vector<string>& strings, int left, int right) {
        int co=0;
        for(int i=left;i<=right;i++){
            string st=strings[i];
            if(is_vowal(st[0]) && is_vowal(st[st.size()-1])) co++;
        }
        return co;
    }
};
