
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* The structure of a BST Node is as follows:
struct Node 
{
    int data;
    Node * right, * left;
}; */
void printNearNodes(Node *root, int l, int h)
{
    if(root==NULL)
        return;
        
    if(l < root->data)
        printNearNodes(root->left,l,h);
        
    if(root->data >=l && root->data<=h)
        cout<<root->data<<" ";
    
    if(h > root->data)
        printNearNodes(root->right,l,h);
}