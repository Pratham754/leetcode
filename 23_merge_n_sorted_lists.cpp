#include <bits/stdc++.h>
#include <vector>


struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.empty()) {
            return nullptr;
        }
        int n = lists.size();
        while (n > 1) {
            for (int i = 0; i < n / 2; i++) {
                lists[i] = mergeTwo(lists[i], lists[n - 1 - i]);
            }
            n = (n + 1) / 2;
        }
        return lists[0];
    }

private:
    ListNode* mergeTwo(ListNode* l1, ListNode* l2) {
        ListNode* dh = new ListNode(0);
        ListNode* current = dh;

        ListNode* p1 = l1;
        ListNode* p2 = l2;

        while (p1 && p2) {
            if (p1->val <= p2->val) {
                current->next = p1;
                p1 = p1->next;
            } else {
                current->next = p2;
                p2 = p2->next;
            }
            current = current->next;
        }

        current->next = (p1) ? p1 : p2;

        ListNode* merged = dh->next;
        delete dh;
        return merged;
    }
};