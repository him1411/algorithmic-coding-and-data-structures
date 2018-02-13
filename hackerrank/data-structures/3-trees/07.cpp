//https://www.hackerrank.com/challenges/binary-search-tree-insertion/problem
/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/

node * newnode(int value)
{
    node* newnode = new node();
    newnode->data = value;
    newnode->left = newnode->right=NULL;
    return newnode;
}

node * insert(node * root, int data) 
{
    if(root == NULL)
    {
        root  = newnode(data);
    }
    else if(data <= root->data)
    {
        root->left = insert(root->left,data);
    }
    else
    {
        root->right = insert(root->right,data);
    }

   return root;
}
