public class Stringpalindrom {
    public static void main(String[] args) {
        String str="Malayalam",reverstr="";
        int strlen=str.length(); // length calculate the 
        
        for(int i=(strlen-1);i>=0;i--){
            reverstr+=str.charAt(i);/// charAt (i) its gives the that perticular index value 
        }
        if(reverstr.toLowerCase().equals(str.toLowerCase())){// equals give the tow values are qual or not
            System.out.println(str+" it's a Palindram");
        }
        else{
            System.out.println(str+" Its not a Palindrom");
        }
    }
}
