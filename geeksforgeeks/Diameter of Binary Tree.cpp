
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */
/* Computes the diameter of binary tree with given root.  */
int height(Node *root,int &ans)
{
    if(root==NULL)
        return 0;
        
    int leftheight=height(root->left,ans);
    int rightheight=height(root->right,ans);
    
    ans = max(ans,1+leftheight+rightheight);
    
    return 1+ max(leftheight,rightheight);
}

int diameter(Node* node)
{
    if(node==NULL)
        return 0;
        
    int ans=INT_MIN;
    int heightoftree = height(node,ans);
    return ans;
}