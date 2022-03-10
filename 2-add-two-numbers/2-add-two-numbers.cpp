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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode *dummy=new ListNode(0);
        ListNode *cur=dummy;
        
        int s=0;
        int c=0;
        while(l1 or l2 or c)
        {   
            int a=l1?l1->val:0;
            int b=l2?l2->val:0;
            s=a+b+c;
            c=s/10;
            
            cur->next=new ListNode(s%10);
            cur=cur->next;
            if(l1){ l1=l1->next; }
            if(l2){ l2=l2->next; }            
        }
        
        return dummy->next;
        
    }
};