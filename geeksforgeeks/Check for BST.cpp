
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node {
    int data;
    Node* left, * right;
}; */
/* Should return true if tree represented by root is BST. 
   For example, return  value should be 1 for following tree.
         20
     /      \ 
   10       30
  and return value should be 0 for following tree.
         10
     /      \ 
   20       30 */
bool isBST1(Node* root,int min,int max)
{
    if(root==NULL)
    return 1;
    if(root->data<min || root->data>max)
    return 0;
    return isBST1(root->left,min,root->data-1) && isBST1(root->right,root->data+1,max);
}
bool isBST(Node* root) {
     return isBST1(root,INT_MIN,INT_MAX);
}
