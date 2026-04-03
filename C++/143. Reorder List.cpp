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
    void reorderList(ListNode* head) 
    {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* secondHalf = slow->next;
        slow->next = nullptr;
        ListNode* node = nullptr;

        while (secondHalf)
        {
            ListNode* temp = secondHalf->next;
            secondHalf->next = node;
            node = secondHalf;
            secondHalf = temp;
        }

        ListNode* first = head;
        secondHalf = node;

        while (secondHalf)
        {
            ListNode* temp1 = first->next;
            ListNode* temp2 = secondHalf->next;
            first->next = secondHalf;
            secondHalf->next = temp1;
            first = temp1;
            secondHalf = temp2;
        }
    }
};
