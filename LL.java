public class LL{
private Node head;
private Node tail;

private int size;

public LL(){
	this.size=0;
}

private class Node{

private int val;
private Node next;

public Node(int val){
this.val=val;
}
public Node(int val,Node next){
this.val=val;
this.next=next;

}

}

public void insertFirst(int val){
	Node node=new Node(val);
	
	node.next=head;
	head=node;
	if(tail==null){
	tail=head;
	}
	size+=1;
}

public void insert(int val,int index){
if(index<=0){
insertFirst(val);
return;
}
if(index>=size){
insertLast(val);
return;
} 
Node temp=head;
for(int i=1;i<index;i++){
	temp=temp.next;
}
Node node=new Node(val,temp.next);
temp.next=node;
size++;

}

public void insertLast(int val){
if(tail==null){
insertFirst(val);
return;
}
Node node=new Node(val);
tail.next=node;
tail=node;
size+=1;

}

public void display(){

Node temp=head;

while(temp!=null){
System.out.print(temp.val+"-> ");
temp=temp.next;
}
System.out.println("End");
}
public int delete(int index){
if(index==0){
return deleteFirst();
}
if(index>=size-1){
return deleteLast();
}
Node pre=get(index-1);
int val=pre.next.val;
pre.next=pre.next.next;
size--;
return val;
}
public int deleteFirst(){
int val=head.val;
head=head.next;

if(head==null){
tail=null;
}
size--;
return val;
}
public int deleteLast(){
if(size<=1){
return deleteFirst();
}
Node SecondLast=get(size-2);
int val=tail.val;
tail=SecondLast;
tail.next=null;
size--;
return val;
}

public Node find(int value){
Node node=head;
while(node!=null){
if(node.val==value){
return node;
}
node=node.next;

}
return null;
}

public Node get(int index){
Node node=head;
for(int i=0;i<index;i++){
	node=node.next;
}
return node;
}


}