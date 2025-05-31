// User function Template for C++

/*
struct Node
{
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }

};
*/
class Solution {
  public:
    bool searchLinkedList(Node *head, int x) {
        // Your code here
        Node* temp=head;
        int found=0;
        while(temp){
            if(temp->data==x){
                found=1;
                break;
            }
            temp=temp->next;
        }
        if(found)return true;
        return false;
    }
};