// User function Template for C++

// Function to find the minimum element in the given BST.

/* struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
// Utility function to create a new Tree Node
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}
*/

class Solution {
  public:
    void mins(Node* root ,vector<int>& m){
        if(root == nullptr)return;
        mins(root->left,m);
        m.push_back(root->data);
        mins(root->right,m);
    }
    int minValue(Node* root) {
        // Code here
        vector<int> m;
        mins(root,m);
        int ans=*min_element(m.begin(),m.end());
        return ans;
    }
};
