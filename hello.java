class MyLinkedList {
    private Node head;
    private Node tail;
    private int size;
    private class Node{
        int val;
        Node next;
        private Node(int val){
            this.val=val;
        }
        private Node(int val,Node next){
            this.val=val;
            this.next=next;
        }
    }
    public MyLinkedList() {
        this.size=0;
    }
    
    public int get(int index) {
        if(index<0 || index>=size){
            return -1;
        }
        Node temp=head;
        for(int i=0;i<index;i++){
            temp=temp.next;
        }
        return temp.val;
        
    }
     public Node getNode(int index) {
        if (index < 0 || index >= size) return null;
        Node temp=head;
        for(int i=0;i<index;i++){
            temp=temp.next;
        }
        return temp;
        
    }
    
    public void addAtHead(int val) {
        Node node=new Node(val);
        node.next=head;
        head=node;
        if(tail==null){
            tail=head;
        }
        size++;
    }
    
    public void addAtTail(int val) {
        Node node=new Node(val);
        if(tail==null){
            head=tail=node;
        }
        else{
            tail.next=node;
            tail=node;    
        }
        size++;

    }
    
    public void addAtIndex(int index, int val) {
        if (index < 0 || index > size) return;
        if(index==0){
            addAtHead(val);
            return;
        }
        if(index==size){
            addAtTail(val);
            return;
        }
        Node pre=getNode(index-1);
        Node node=new Node(val,pre.next);
        pre.next=node;
        size++; 
    }
    
    public void deleteAtIndex(int index) {
        if(index<0 ||index>=size){
            return;
        }
        if(index==0){
            head=head.next;
            if(head==null){
                tail=null;
            }
            size--;
            return;
        }
        Node pre=getNode(index-1);
        pre.next=pre.next.next;
        if(index==size-1)
        {
            tail=pre;
        }
        size--;


    }
    public static void main(String[] args) {
             MyLinkedList obj = new MyLinkedList();
             obj.addAtHead(2);
             obj.addAtTail(34);
             obj.deleteAtIndex(1);
             int param_1 = obj.get(2);
            obj.addAtIndex(2,1);
            System.out.println(param_1);
    }
}


 

 