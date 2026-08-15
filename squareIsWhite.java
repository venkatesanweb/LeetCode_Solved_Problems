class Solution {
    public boolean squareIsWhite(String coordinates) {
        int ackichar = coordinates.charAt(0);
        int ackival = coordinates.charAt(1);
        if(ackichar%2==1 && ackival%2==1) return false;
        else if(ackichar%2==0 && ackival%2==0) return false;
        return true;
    }
}
