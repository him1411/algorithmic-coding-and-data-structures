//https://www.hackerrank.com/challenges/tree-level-order-traversal/problem

/*
struct node
{
    int data;
    node* left;
    node* right;
}*/

void levelOrder(node * root) 
{
    if(root==NULL)
        return;
    
    queue<node*>q;
    q.push(root);
    while(!q.empty())
    {
        node* x = q.front();
        cout<<x->data<<" ";
        if(x->left != NULL)
            q.push(x->left);
        
        if(x->right != NULL)
            q.push(x->right);
        
        q.pop();
    }
}