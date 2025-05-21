/*

Definition for Binary Tree Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    int getSize(Node* root) {
        // code here
        if(root == nullptr) return 0;
        int cnt=1;
        queue<Node*>Q;
        Q.push(root);
        while(!Q.empty()){
            int len=Q.size();
            for(int i=0;i<len;i++){
                Node *curr =Q.front();
                Q.pop();
               // cout<<curr->data<<" ";
                if(curr->left){
                    Q.push(curr->left);
                    cnt++;
                }
                if(curr->right){
                    Q.push(curr->right);
                    cnt++;
                }
            }
           
        }
        return cnt;
    }
};
