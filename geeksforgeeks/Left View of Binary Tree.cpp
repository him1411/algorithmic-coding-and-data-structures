
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */
// A wrapper over leftViewUtil()
void left(Node *root, int level, int *maxlevel )
{
    if(root==NULL)
        return ;
    
    if(*maxlevel < level)
    {
        cout<<root->data<<" ";
        *maxlevel =level;
    }
    left(root->left,level+1,maxlevel);
    left(root->right,level+1,maxlevel);
}

void leftView(Node *root)
{
    int maxlevel=0;
    left(root,1,&maxlevel);
}