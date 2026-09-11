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
#define null NULL
#define node ListNode
    bool hasCycle(ListNode *head) {
        node* slow=head;
        node* fast=head;
        
        while(fast!=null && fast->next!=null){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) return true;
        }
        return false;
    }
};