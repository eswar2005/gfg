// User function template for C++

/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    int heightHelp(Node* node){
        if(node == nullptr)return 0;
        int h_left=heightHelp(node->left);
        int h_right=heightHelp(node->right);
        int curr=max(h_left,h_right)+1;
        return curr;
    }
    int height(Node* node) {
        // code here
        int h=heightHelp(node);
        return h-1;
    }
};