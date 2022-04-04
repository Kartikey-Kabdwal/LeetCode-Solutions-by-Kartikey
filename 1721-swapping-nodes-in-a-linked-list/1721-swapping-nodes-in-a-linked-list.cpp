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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *slow=head,*fast=head,*kth=NULL;
        while(--k)
        {
            slow=slow->next;
        }
        kth=slow;
        slow=slow->next;
        while(slow)
        {
            fast=fast->next;
            slow=slow->next;
        }
        swap(fast->val,kth->val);
        return head;
    }
};