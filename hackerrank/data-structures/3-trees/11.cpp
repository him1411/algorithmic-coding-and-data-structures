//https://www.hackerrank.com/challenges/is-binary-search-tree/problem
/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
   struct Node {
      int data;
      Node* left;
      Node* right;
   }
*/
    bool subless(Node* root,int value)
    {
        if(root==NULL)
            return true;
        if(root->data <value  &&  subless(root->left,value)  &&  subless(root->right,value))
            return true;
        else
            return false;
    }
    
    bool subgreater(Node* root,int value)
    {
        if(root==NULL)
            return true;
        if(root->data >value  &&  subgreater(root->left,value)  &&  subgreater(root->right,value))
            return true;
        else
            return false;
    }
   bool checkBST(Node* root) 
   {
       if(root == NULL)
           return true;
       if(checkBST(root->left)  &&  checkBST(root->right)  &&  subless(root->left,root->data)  && subgreater(root->right,root->data))
       {
           return true;
       }
       else
           return false;
   }