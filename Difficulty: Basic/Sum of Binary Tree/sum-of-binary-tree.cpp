/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Function to return a list containing the level order traversal in spiral form.
class Solution {
  public:
    void mins(Node* root ,vector<int>& m){
        if(root == nullptr)return;
        mins(root->left,m);
        m.push_back(root->data);
        mins(root->right,m);
    }
    int sumBT(Node* root) {
        // code here
        vector<int> m;
        mins(root,m);
        int ans=accumulate(m.begin(),m.end(),0);
        return ans;
    }
};