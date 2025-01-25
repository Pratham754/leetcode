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
    ListNode* removeNodes(ListNode* head) {
        if(head == nullptr) return nullptr;

        ListNode* curr = head;
        ListNode* nextBig = removeNodes(curr->next);

        curr->next = nextBig;
        if(nextBig == nullptr || curr->val >= nextBig->val) return curr;
        return nextBig;
    }
};