from typing import Optional

class ListNode:
    def __int__(self, val = 0, next = None):
        self.val = val
        self.next = next

class Solution:
    def mergeTwoLists(self, l1:Optional[ListNode], l2:Optional[ListNode]) -> Optional[ListNode]:
        head = curr = ListNode()
        while(l1!=None and l2!=None):
            if (l1.val >= l2.val):
                curr.next = l2
                curr = curr.next
                l2 = l2.next
            else:
                curr.next = l1
                curr = curr.next
                l1 = l1.next
        if l1!=None: curr.next = l1
        if l2!=None: curr.next = l2
        #print(head.next)
        return head.next



if __name__=='__main__':
    Solution.mergeTwoLists()
