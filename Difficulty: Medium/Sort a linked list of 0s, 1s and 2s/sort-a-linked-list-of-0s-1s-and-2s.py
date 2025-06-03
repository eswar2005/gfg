'''
	Function Arguments: head of the original list.
	Return Type: head of the new list formed.
	{
		# Node Class
		class Node:
		    def __init__(self, data):   # data -> value stored in node
		        self.data = data
		        self.next = None
	}'''
	
class Solution:
    def segregate(self, head):
        #code here
        l=[]
        temp=head
        while temp:
            l.append(temp.data)
            temp=temp.next
        k=sorted(l)
        head=Node(k[0])
        curr=head
        for i in k[1:]:
            curr.next=Node(i)
            curr=curr.next
        return head
        
            
    