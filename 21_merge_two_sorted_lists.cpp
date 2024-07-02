struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution{
    public:
    ListNode* mergeSortedList(ListNode* l1, ListNode* l2){
        ListNode* dh = new ListNode(0);
        ListNode* current = dh;

        ListNode* p1 = l1;
        ListNode* p2 = l2;

        while(p1 && p2){
            if(p1->val <= p2->val){
                current->next = p1;
                p1  = p1->next;
            }
            else{
                current->next = p2;
                p2 = p2->next;
            }
            current = current->next;
        }

        current->next = (p1) ? p1 : p2; //After exiting the while loop, one of p1 or p2 might still have remaining nodes. The statement handles this by linking the remaining nodes of either l1 or l2 (whichever is not nullptr) directly to current->next.

        ListNode* merged = dh->next;
        delete dh;
        return merged;
    }
};