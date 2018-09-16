
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*  Structure of a Binary Tree 
struct Node
{
    int data;
    Node* left, *right;
}; */
/* Function to get the maximum width of a binary tree*/

int height(struct Node* node)
{
    if (node==NULL)
        return 0;
    else
    {
        int lHeight = height(node->left);
        int rHeight = height(node->right);
        return (lHeight > rHeight)? (lHeight+1): (rHeight+1);
   }
}

int getwidth(struct Node* root, int level)
{
     
    if(root == NULL)
        return 0;
   
    if(level == 1)
        return 1;
             
    else if (level > 1)
        return getwidth(root->left, level-1) + getwidth(root->right, level-1);
}
int getMaxWidth(Node* root)
{
    int mxwidth=0,width;
    int h = height(root);
    int i;
    
    for(int i=1;i<=h;i++)
    {
        width = getwidth(root,i);
        mxwidth = max(mxwidth,width);
    }
    return mxwidth;
}
