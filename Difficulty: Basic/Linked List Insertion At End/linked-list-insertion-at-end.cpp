/*Structure of the linked list node is as
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        Node *newnode=new Node(x);
        if(head==nullptr){
            head=newnode;
            newnode=head;
        }
        else{
        Node *temp=head;
        Node *prev=NULL;
        while(temp){
            prev=temp;
            temp=temp->next;
        }
        prev->next=newnode;
        prev=newnode;
        }
        return head;
    }
};