class Solution {
public:
    int minBishopMoves(vector<int>& so, vector<int>& tr) {
        int s1 = so[0],s2=tr[0];
        int en1 = so[1],en2=tr[1];
        if(abs(s1-en1)%2!=abs(s2-en2)%2) return -1;
        if(abs(s1-s2)==abs(en2-en1)) return 1;
        return 2;
    }
};
