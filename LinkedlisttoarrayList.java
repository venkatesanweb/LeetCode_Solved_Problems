import java.util.*;

public class LinkedlisttoarrayList {
    public static void main(String[] args) {

        // Step 1: Define all arrays (each represents one linked list)
        int[][] lists = { {1,4,5}, {1,3,4}, {2,6} };

        // Step 2: Create and store linked lists
        ArrayList<ListNode> linkedLists = new ArrayList<>();
        for (int[] arr : lists) {
            linkedLists.add(createLinkedList(arr));
        }

        // Step 3: Convert each linked list to ArrayList
        ArrayList<ArrayList<Integer>> result = new ArrayList<>();
        for (ListNode head : linkedLists) {
            result.add(linkedListToArrayList(head));
        }

        // Step 4: Print final ArrayList of lists
        System.out.println(result);
    }

    // Convert array to linked list
    public static ListNode createLinkedList(int[] arr) {
        ListNode dummy = new ListNode(0);
        ListNode current = dummy;
        for (int val : arr) {
            current.next = new ListNode(val);
            current = current.next;
        }
        return dummy.next;
    }

    // Convert linked list to ArrayList
    public static ArrayList<Integer> linkedListToArrayList(ListNode head) {
        ArrayList<Integer> arr = new ArrayList<>();
        while (head != null) {
            arr.add(head.val);
            head = head.next;
        }
        return arr;
    }
}

// Node class
class ListNode {
    int val;
    ListNode next;

    ListNode(int val) {
        this.val = val;
    }
}
