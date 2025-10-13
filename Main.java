public class Main{

public static void main(String[] args){
	LL obj=new LL();
	obj.insertFirst(7);
	obj.insertFirst(5);
	obj.insertFirst(4);
	obj.insertFirst(3);
	obj.insert(100,20);
	obj.insertLast(30);
	obj.display();
	System.out.println("Deleted element : "+obj.deleteFirst());
	obj.display();
	System.out.println("Deleted element : "+obj.deleteLast());
	obj.display();
	System.out.println(obj.delete(9));
	obj.display();
	System.out.println(obj.find(7));

}
}