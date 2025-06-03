#function Template for python3

"""
# Node Class

class Node:
    def __init__(self, val):
        self.data = val
        self.next = None

"""

class Solution:
    def reverseList(self, head):
        # Code 
        temp=head
        l=[]
        while temp:
            l.append(temp.data)
            temp=temp.next
        l=l[::-1]
        head=Node(l[0])
        curr=head
        for i in l[1:]:
            curr.next=Node(i)
            curr=curr.next
        return head