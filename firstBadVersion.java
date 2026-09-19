/* The isBadVersion API is defined in the parent class VersionControl.
      boolean isBadVersion(int version); */

public class Solution extends VersionControl {
    public int firstBadVersion(int n) {
        int st=0,en=n;
        while(st<=en){
            int mid = st + (en-st)/2;
            boolean ans = isBadVersion(mid);
            if(ans){
                en=mid-1;
            }
            else st=mid+1;
        }
        
        return st;
    }
}
