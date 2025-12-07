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
    ListNode* sortList(ListNode* head) {
        if(head==nullptr) return head;
        vector<int>vc;
        while(head!=NULL){
            vc.push_back(head->val);
            head=head->next;
        }
        sort(vc.begin(),vc.end());
        ListNode* node=new ListNode(vc[0]);
        ListNode* temp=node;
        for(int i=1;i<vc.size();i++){
            ListNode* nodes=new ListNode(vc[i]);
            temp->next=nodes;
            temp=temp->next;
        }
        return node;
    }
};
