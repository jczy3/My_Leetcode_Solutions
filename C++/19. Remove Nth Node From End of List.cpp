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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (!(head->next)) return nullptr;
        int numNodesInLL = 0;
        ListNode* temp = head;
        while (temp)
        {
            temp = temp->next;
            ++numNodesInLL;
        }

        if (numNodesInLL == n)
        {
            return head->next;
        }

        int pos = numNodesInLL - n - 1;
        temp = head;
        for (int i = 0; i < pos; ++i)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};
