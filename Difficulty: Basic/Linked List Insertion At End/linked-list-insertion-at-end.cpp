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
        Node *temp=head;
        Node *prev=NULL;
        if(head==nullptr){
            head=newnode;
          //  prev=head;
        }
        else{
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