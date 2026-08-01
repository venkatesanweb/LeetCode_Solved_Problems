class Solution {
    public int countSeniors(String[] details) {
        int co=0;
        for(String s : details){
            int age = Integer.parseInt(s.substring(11,13));
            // System.out.println(age);
            if(age>60) co++;
        }
        return co;
    }
}

        
