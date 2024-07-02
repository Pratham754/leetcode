struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode* removeNthElement(ListNode* head, int n)
    {
        ListNode *dh = new ListNode(0);
        dh->next = head;
        ListNode *first = dh;
        ListNode *second = dh;

        for (int i = 1; i < n + 1; i++)
        {
            second = second->next;
        }

        while (second)
        {
            first = first->next;
            second = second->next;
        }

        first->next = first->next->next;
        return dh->next;
    }
};