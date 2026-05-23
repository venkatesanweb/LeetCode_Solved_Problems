/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode mergeTwoLists(ListNode temp1, ListNode temp2) {
        ListNode com = new ListNode(0);
        ListNode temp=com;
        while(temp1!=null && temp2!=null){
            int val1 = temp1.val;
            int val2 = temp2.val;
            if(val1>val2){
                ListNode node1 = new ListNode(val2);
                com.next=node1;
                com=node1;
                temp2=temp2.next;
            }
            else{
                ListNode node1 = new ListNode(val1);
                com.next=node1;
                com=node1;
                temp1=temp1.next;
            }
        }
        while(temp1!=null){
            ListNode node1 = new ListNode(temp1.val);
            com.next=node1;
            com=node1;
            temp1=temp1.next;
        }
        while(temp2!=null){
            ListNode node1 = new ListNode(temp2.val);
            com.next=node1;
            com=node1;
            temp2=temp2.next;
        }
        return temp.next;
    }
}
