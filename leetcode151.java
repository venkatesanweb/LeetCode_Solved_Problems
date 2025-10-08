class leetcode151 {
    static public String reverseWords(String s) {
        String[] arr=s.trim().split("\\s+");
        StringBuilder ss=new StringBuilder();
        for(int i=arr.length-1;i>=0;i--){
            ss.append(arr[i]);
            if(i!=0) ss.append(" ");
        }
        return ss.toString();
    }
public static void main(String[] args){
String ss=reverseWords("Hello World");
System.out.println(ss);
}
}