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
#define Node ListNode
#define null NULL
    bool isPalindrome(ListNode* head) {
        if(head==null) return true;

        // Node* x=head;
        // int len=0;
        // while(x!=null){
        //     len++;
        //     x=x->next;
        //     }

        Node* slow= head;
        Node* fast=head;
        std::stack<int> st;
        
        while(fast!=null && fast->next!=null){
            st.push(slow->val);
            slow=slow->next;
            fast=fast->next->next;
        }
        
        if(fast!=null) slow=slow->next;
        
        while(slow!=null){
            if(st.top()==slow->val){
                st.pop();
                slow=slow->next;
                }
            else return false;
        }
        return true;
    }
};