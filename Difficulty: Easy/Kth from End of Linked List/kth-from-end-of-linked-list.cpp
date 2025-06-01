/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

// Function to find the data of kth node from the end of a linked list.
class Solution {
  public:
    int getKthFromLast(Node *head, int k) {
        // Your code here
        Node* temp=head;
        int cnt=0;
        while(temp){
            cnt++;
            temp=temp->next;
        }
        temp=head;
        int find_ele=cnt-k+1;
       // if(find_ele<1)return -1;
        int precnt=0;
        while(temp){
            precnt++;
            if(precnt==find_ele){
                return temp->data;
            }
            temp=temp->next;
        }
        return -1;
    }
};