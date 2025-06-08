/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

// Function to insert a node in the middle of the linked list.
class Solution {
  public:
    Node *insertInMiddle(Node *head, int x) {
        // Code Here
        Node* newNode = new Node(x);
        if (head == NULL) {
            // If list is empty, new node becomes head
            return newNode;
        }
        Node* temp=head;
        int cnt=0;
        while(temp){
            cnt++;
            temp=temp->next;
        }
        temp=head;
        int mid=(cnt/2);
        //cout<<mid<<"\n";
        // if (mid == 0) {
        //     newNode->next = head;
        //     return newNode;
        // }
        
    //   if(cnt%2==0){
    //       mid=mid+1;
    //   }
    //     else{
    //         mid=mid+2;
    //     }
    //     Node* p1=head;
    //     Node* p2=NULL;
    //     mid--;
    //     while(mid>1){
    //         mid--;
    //         p1=p1->next;
    //     }
    //     p2=p1->next;
    //     p1->next=newNode;
    //     newNode->next=p2;
    if(cnt%2==0)mid=mid-1;
        for(int i=1;i<=mid && temp!=nullptr;i++){
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
        
        return head;
    }
};