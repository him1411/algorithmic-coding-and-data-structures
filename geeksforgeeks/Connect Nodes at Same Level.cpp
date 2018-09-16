
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* struct Node
{
  int data;
  Node *left,  *right;
  Node *nextRight;  // This has garbage value in input trees
}; */
// Should set the nextRight for all nodes
void connectrecurse(Node* p)
{
    if(!p)
        return;
        
    if(p->left)
        p->left->nextRight = p->right;
        
    if(p->right)
        p->right->nextRight = (p->nextRight)? p->nextRight->left: NULL;
        
    connectrecurse(p->left);
    connectrecurse(p->right);
}

void connect(Node *p)
{
    p->nextRight = NULL;
    connectrecurse(p);
}


