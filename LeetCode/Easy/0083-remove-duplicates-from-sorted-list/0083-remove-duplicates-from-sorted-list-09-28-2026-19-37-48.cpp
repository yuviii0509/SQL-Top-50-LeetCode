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
        node* current= head;
        node* start= head;
        node* nex=head->next;
        while( nex!=null){
            if(current->val==nex->val){  //value compare kro (val se )
                current->next=nex->next;
                nex=nex->next;
            }
            else{
                current=current->next;
                nex=nex->next;
            }
        }
        return start;
    }
};