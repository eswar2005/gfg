/* A binary tree node has data, pointer to left child
   and a pointer to right child

/*
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
    void preorderTraversal(Node* root, vector<int>& result) {
    if (root == nullptr) return;

    result.push_back(root->data);             
    preorderTraversal(root->left, result);    
    preorderTraversal(root->right, result);   
}
    // Function to return a list containing the preorder traversal of the tree.
    vector<int> preorder(Node* root) {
        vector<int> result;
        preorderTraversal(root, result);
        return result;
    }
};
        