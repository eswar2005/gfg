'''
# Node Class
class Node:
    def __init__(self, data):   # data -> value stored in node
        self.data = data
        self.next = None

'''
class Solution:
    def sortedMerge(self,head1, head2):
        # code here
        l=[]
        while head1:
            l.append(head1.data)
            head1=head1.next
        while head2:
            l.append(head2.data)
            head2=head2.next
        l.sort()
        head=Node(l[0])
        curr=head
        for i in l[1:]:
            curr.next=Node(i)
            curr=curr.next
        return head