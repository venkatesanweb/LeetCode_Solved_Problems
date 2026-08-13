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
    ListNode* removeNodes(ListNode* head) {

        if (head == nullptr)
            return nullptr;

        vector<int> vc;
        while (head) {
            vc.push_back(head->val);
            head = head->next;
        }
        vector<int> ans;
        int maxVal = vc[vc.size() - 1];
        ans.push_back(maxVal);
        for (int i = vc.size() - 2; i >= 0; i--) {

            if (vc[i] >= maxVal) {
                ans.push_back(vc[i]);
                maxVal = vc[i];
            }
        }
        reverse(ans.begin(), ans.end());
        ListNode* newHead = new ListNode(ans[0]);
        ListNode* temp = newHead;

        for (int i = 1; i < ans.size(); i++) {
            ListNode* node = new ListNode(ans[i]);
            temp->next = node;
            temp = node;
        }

        return newHead;
    }
};
