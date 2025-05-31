/* Link list Node
struct Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; */
class Solution {
  public:
    /* Should return data of middle node. If linked list is empty, then -1 */
    int getMiddle(Node* head) {
        // code here
        int cnt=0;
        Node *temp=head;
         Node *temp1=head;
        while(temp){
            cnt++;
            temp=temp->next;
        }
        int s=cnt/2;
        int precnt=0;
        while(temp1){
            if(precnt==s){
                return temp1->data;
                break;
            }
            precnt++;
            temp1=temp1->next;
        }
        return 0;
    }
};