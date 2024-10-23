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
    ListNode* rev(ListNode* head){
        ListNode* prev = NULL;
        ListNode* next = head;
        ListNode* curr = head;
        while(curr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* s = head;
        ListNode* f = head;
        while(f!=NULL && f->next!=NULL){
            s = s->next;
            f = f->next->next;
        }
        ListNode* revs = rev(s);
        while(revs!=NULL){
            if(head->val != revs->val){
                return false;
            }
            head = head->next;
            revs = revs->next;
        }
        return true;
    }
};