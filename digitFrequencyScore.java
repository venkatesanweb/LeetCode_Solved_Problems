class Solution {
    public int digitFrequencyScore(int n) {
        Map<Integer,Integer> mp = new HashMap<>();
        while(n!=0){
            mp.put(n%10,mp.getOrDefault(n%10,0)+1);
            n/=10;
        }
        int sum = 0;
        for(int i : mp.keySet()){
            sum = sum + (i*mp.get(i));
        }
        return sum;
    }
  // other
  public int digitFrequencyScoreoptimal(int n) {
        int sum = 0;
        while(n!=0){
            sum+=(n%10);
            n/=10;
        }
        
      
        return sum;
    }
}
