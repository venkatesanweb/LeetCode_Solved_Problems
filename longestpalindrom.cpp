class Solution {
public:
    int solve(string& s, int start, int end)
    {
        if (start == end) return 1;
        if (start > end) return 0;
        
        if (s[start] == s[end]) return (2 + solve(s, start + 1, end - 1));
        int leaveLeft = solve(s, start + 1, end);
        int leaveRight = solve(s, start, end - 1);
        return max(leaveLeft, leaveRight);
    }
    int longestPalindromeSubseq(string s) 
    {
        int ans = solve(s, 0, s.size() - 1);
        return ans;
    }
};
