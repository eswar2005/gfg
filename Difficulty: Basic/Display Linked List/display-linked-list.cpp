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

vector<int> displayList(Node *head) {
    // Your code here
    vector<int> ans;
    Node* temp=head;
    while(temp){
        ans.push_back(temp->data);
        temp=temp->next;
    }
    return ans;
}
