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
#define node ListNode
#define null NULL
    ListNode* deleteDuplicates(ListNode* head) {
      if(head==null) return head;

      node* curr=head;


        while(curr->next !=null){
            if(curr->val == curr->next->val){
                curr->next=curr->next->next;
            }
            else curr=curr->next;
        }
        return head;
    }
};