'''
class Node:
    def __init__(self,data):
        self.data=data
        self.next=None
'''

class Solution:
    def sort(self, head):
        # return head
        l=[]
        temp=head
        while temp:
            l.append(temp.data)
            temp=temp.next
        l.sort()
        head=Node(l[0])
        curr=head
        for i in l[1:]:
            curr.next=Node(i)
            curr=curr.next
        return head