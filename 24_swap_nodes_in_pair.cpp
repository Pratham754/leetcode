struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (!head || !head->next) {
            return head;
        }

        ListNode* dh = new ListNode(0);
        dh->next = head;
        
        ListNode* prev = dh;
        ListNode* curr = head;

        while(curr && curr->next){
            ListNode* nextPair = curr->next->next;

            prev->next = curr->next;
            curr->next->next = curr;
            curr->next = nextPair;

            prev = curr;
            curr = nextPair;
        }
        ListNode* nh = dh->next;
        delete dh;
        return nh;
    }
};