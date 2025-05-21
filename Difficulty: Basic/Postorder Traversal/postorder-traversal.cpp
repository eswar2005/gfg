// User function Template for C++

/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */
class Solution {
  public:
    void postordertrv(Node* root, vector<int>& ans){
        if(root==nullptr)return;
        //left right root
        postordertrv(root->left,ans);
        postordertrv(root->right,ans);
        ans.push_back(root->data);
    }
    // Function to return a list containing the postorder traversal of the tree.
    vector<int> postOrder(Node* root) {
        // Your code here
        vector<int> ans;
        postordertrv(root,ans);
        return ans;
    }
};