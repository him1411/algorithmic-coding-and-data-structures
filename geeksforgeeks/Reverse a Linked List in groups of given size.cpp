
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
  struct node
  {
     int data;
     struct Node *next;
  }
*/
struct node *reverse (struct node *head, int k)
{
    node *curr =head;
    node *next=NULL,*prev = NULL;
    int count=0;
    
    while(curr!=NULL && count<k)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    
    if(next!=NULL)
        head->next=reverse(next,k);
        
    return prev;
}
