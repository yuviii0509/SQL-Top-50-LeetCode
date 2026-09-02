class Solution {
public:

    void reverse(ListNode* head, int times) {
        ListNode* curr = head;
        ListNode* prev = nullptr;

        while (times--) {
            ListNode* nex = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nex;
        }
    }

    ListNode* swapPairs(ListNode* head) {
        if (head == nullptr) return nullptr;

        ListNode* left = head;
        ListNode* right;
        ListNode* res = nullptr;
        ListNode* prevleft = nullptr;

        int size = 2;

        while (true) {

            right = left;

            for (int i = 0; i < size - 1; i++) {
                if (right == nullptr)
                    break;

                right = right->next;
            }

            if (right != nullptr) {

                ListNode* nextleft = right->next;

                reverse(left, size);

                if (prevleft != nullptr) {
                    prevleft->next = right;
                }
                else {
                    res = right;
                }

                prevleft = left;
                left = nextleft;
            }
            else {

                if (prevleft != nullptr) {
                    prevleft->next = left;
                }
                else {
                    res = left;   // THIS was missing
                }

                break;
            }
        }

        return res;
    }
};