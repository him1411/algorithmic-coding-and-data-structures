//https://www.hackerrank.com/challenges/tree-top-view/problem
/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/

void topView(node * root) 
{    
    if(root->left != NULL)
    {
        root->left->right = NULL;
        topView(root->left);
    }
    cout<<root->data<<" ";
    if(root->right != NULL)
    {
        root->right->left = NULL;
        topView(root->right);
    }
}