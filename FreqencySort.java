
class Solution {
    public String frequencySort(String s) {
        Map<Character, Integer> freq = new HashMap<>();
        
       
        for (char ch : s.toCharArray()) {
            freq.put(ch, freq.getOrDefault(ch, 0) + 1);
        }

       
        List<Character> lis = new ArrayList<>(freq.keySet());

       
        lis.sort((a, b) -> freq.get(b) - freq.get(a));

      
        StringBuilder sub = new StringBuilder();
        for (char c : lis) {
            int count = freq.get(c);
            for (int i = 0; i < count; i++) {
                sub.append(c);
            }
        }

        return sub.toString();
    }
}

