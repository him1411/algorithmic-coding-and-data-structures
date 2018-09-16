
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* A binary tree Node
struct Node
{
    int data;
    Node* left, * right;
}; */
//You are required to complete this method
void levelOrder(Node* node)
{
    if(node==NULL)
        return;
        
    queue<Node*> q;
    q.push(node);
    while(!q.empty())
    {
        Node *top = q.front();
        q.pop();
        cout<<top->data<<" ";
        if(top->left)
            q.push(top->left);
        if(top->right)
            q.push(top->right);
    }
    return ;
}
