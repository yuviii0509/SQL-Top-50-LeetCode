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
#define null NULL
#define Node ListNode
#define data val
#define ed endl

    ListNode* rotateRight(ListNode* head, int k) {

        if(k==0 || head==null) return head;

        int n=1;
        Node* last = head;
        while(last->next!=null){
            n++;
            last=last->next;
        }

        k=k%n;
        if(k==0) return head;

        int c = n-k;
        Node* t=head;
        int cnt=1;
        while(t!=null){
            if(cnt==c) break;
                cnt++;
                t=t->next;
        }

        Node* New= t->next;
        last->next= head;
        t->next=null;
        return New;
    }
};