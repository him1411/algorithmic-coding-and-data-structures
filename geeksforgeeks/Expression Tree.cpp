
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*The structure of node is as follows
struct node{
	string data;
	node *left;
	node *right;
};
*/
/*You are required to complete below method */


int evalTree(node* root)
{
    if(!root)
        return 0;
        
    if(!root->left && !root->right)
        return stoi(root->data);
        
    int lval = evalTree(root->left);
    int rval = evalTree(root->right);
    if(root->data == "+")
        return lval+rval;
        
    if(root->data == "-")
        return lval-rval;
        
    if(root->data == "*")
        return lval*rval;
        
    if(root->data == "/")
        return lval/rval;
}
