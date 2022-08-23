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
    ListNode* reverse(ListNode* head)
    {
          if(!head) return NULL;
    
        ListNode *temp;
        ListNode *prev=NULL;
        while(head)
        {
           temp=head->next;
            head->next=prev;
            prev=head;
            head=temp;
           
        }
        return prev;
        
    }
    bool isPalindrome(ListNode* head) {
         if(!head) return NULL;
      
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next and fast->next->next)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        slow->next=reverse(slow->next);
        slow=slow->next;
        while(slow)
        {
            if(slow->val!=head->val)
            {
                return false;
            }
            slow=slow->next;
            head=head->next;
        }
        return true;
            
        
        
        
    }
};