class Solution:
    def union(self, head1,head2):
        # code here
        # return head of resultant linkedlist
        temp1=head1
        temp2=head2
        l=[]
        while temp1:
            l.append(temp1.data)
            temp1=temp1.next
        while temp2:
            l.append(temp2.data)
            temp2=temp2.next
        k=sorted(set(l))
        head=Node(k[0])
        curr=head
        for i in k[1:]:
            curr.next=Node(i)
            curr=curr.next
        return head