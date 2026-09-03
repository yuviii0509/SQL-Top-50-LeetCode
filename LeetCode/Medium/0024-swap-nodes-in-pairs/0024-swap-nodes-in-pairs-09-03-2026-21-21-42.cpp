class Solution {
public:
#define null NULL
#define Node ListNode
#define data val
#define ed endl

void reverse(Node* head, int times){
    Node* curr= head;
    Node* prev= null;
    while(times--){
        Node* nex= curr->next;
        curr->next=prev;
        prev=curr;
        curr=nex;
    }
    return;
}

    ListNode* swapPairs(ListNode* head) {
        if(head==null) 
        return null;
        Node* left = head;
        Node* res=null;
        Node* prevleft= null;
        Node* right;
        int size=2;

        while(true){
            right=left;
            for(int i=0;i<size-1;i++){
                if(right==null)
                break;
                right=right->next;
            }

            if(right){ //left right mil chuka hai
                Node* nextleft= right->next;
                reverse(left,size);
                
                // Fixed: handle first pair vs subsequent pairs correctly
                if(prevleft){
                    prevleft->next=right;
                } else {
                    res=right; // Capture head on the very first swap
                }
                
                prevleft=left; // Update tail of current pair
                left=nextleft; // Move to next pair
            }
            else { 
                // Fixed: Handle leftover single node (odd length list) and break
                if(prevleft){
                    prevleft->next=left;
                } else {
                    res=left; // If list length was less than `size`
                }
                break;
            }
        }
        return res;
    }
};