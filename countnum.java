public class countnum{
static int counts(int a){
return countNum(a,0);
}

static int countNum(int a,int count){
if(a==0){
return count;
}
int rem=a%10;
if(rem==0){
return countNum(a/10,count+1);
}
else{
return countNum(a/10,count);
}
}
public static void main(String[] args){
int res=counts(1090200);
System.out.println(res);
}

}