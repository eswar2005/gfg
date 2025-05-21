/*
// Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    void inorderhelp(Node* root,vector<int>& ans){
        if(root == nullptr)return;
        //left root right
        inorderhelp(root->left,ans);
        ans.push_back(root->data);
        inorderhelp(root->right,ans);
    }
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node* root) {
        // Your code here
        vector<int> ans;
        inorderhelp(root,ans);
        return ans;
    }
};