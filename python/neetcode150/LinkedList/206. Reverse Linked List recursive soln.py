# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not (head):
            return None
        
        newHead = head
        if head.next:   # if the node's next exists (for the original head, this if statement will not run)
            newHead = self.reverseList(head.next) # get the newHead for the reversed LL
            head.next.next = head
        head.next = None

        return newHead
