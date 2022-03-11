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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head or !head->next or k==0)
        {
            return head;
        }
        ListNode* cur=head;
        
        int n,c=1;
        while(cur->next)
        {
            c++;
            cur=cur->next; 
        }
        k=k%c;
        n=c-k;
        cur->next=head;
        while(n--)
        {
            cur=cur->next;
        }
       head=cur->next;
        cur->next=NULL;
        return head;
        
        
    }
};