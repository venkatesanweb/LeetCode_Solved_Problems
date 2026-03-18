/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = new ListNode(0);
        ListNode* node =temp;
        int st=0;
        int end=0;
        int sum=0;
        while(head!=NULL){
            if(head->val==0 && st==0 && end==0){
                st=1;
                head = head->next;
            }
            else if(st==1 && head->val==0){
                ListNode* nodes = new ListNode(sum);
                sum=0;
                node->next=nodes;
                node=nodes;
                st=0;
            }
            else{
                sum+=head->val;
                head=head->next;
            }
        }
        return temp->next;
    }
};
