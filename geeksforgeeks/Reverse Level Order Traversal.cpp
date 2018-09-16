
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* A tree Node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
void reversePrint(Node *root)
{
    if(root==NULL)
        return;
        
    Node *p=NULL;
    queue<Node*> q;
    stack<Node*>s;
    q.push(root);
    vector<int> v;
    while(!q.empty())
    {
        p = q.front();
        q.pop();
        s.push(p);
        if(p->right)
            q.push(p->right);
        if(p->left)
            q.push(p->left);
    }
    while(!s.empty())
    {
        p=s.top();
        s.pop();
        cout<<p->data<<" ";
    }
    return ;
}