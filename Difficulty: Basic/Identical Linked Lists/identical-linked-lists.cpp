/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    // Function to check if two linked lists are identical
    bool areIdentical(struct Node *head1, struct Node *head2) {
        // code here
        Node* temp1=head1;
        Node* temp2=head2;
        while(temp1 && temp2){
            if(temp1->data !=temp2->data){
                return false;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        temp1=head1;
        temp2=head2;
        int cnt1=0,cnt2=0;
        
         while(temp2){
            cnt2++;
            temp2=temp2->next;
        }
        while(temp1){
            cnt1++;
            temp1=temp1->next;
        }
        if(cnt1!=cnt2)return false;
        return true;
    }
};