/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
    ListNode *tortoise = head;
    ListNode *hare = head;
    ListNode *meet = NULL;
    
    while (hare != NULL && hare->next != NULL) {
        tortoise = tortoise->next;
        hare = hare->next->next;
        
        if (tortoise == hare) {
            meet = tortoise;
            break;
        }
    }
    
    if (meet == NULL) {
        return NULL;
    }
    
    ListNode *ptr1 = head;
    ListNode *ptr2 = meet;
    
    while (ptr1 != ptr2) {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    
    return ptr1;
        
    }
};