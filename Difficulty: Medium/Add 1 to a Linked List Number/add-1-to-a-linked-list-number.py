'''

class Node:
    def __init__(self, data):   # data -> value stored in node
        self.data = data
        self.next = None
'''
import sys
class Solution:
    sys.set_int_max_str_digits(100000)
    def addOne(self,head):
        #Returns new head of linked List.
        l=[]
        sums=0
        temp=head
        while temp:
            l.append(temp.data)
            temp=temp.next
        for i in l:
            sums=sums*10+i;
        sums=sums+1
        sums=str(sums)
        # print(type(sums))
        head=Node(int(sums[0]))
        curr=head
        for i in sums[1:]:
            curr.next=Node(int(i))
            curr=curr.next
        return head