
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
  Pairwise swap a linked list
  The input list will have at least one element  
  node is defined as 
  struct node
  {
     int data;
     struct node *next;
  }
*/
void pairWiseSwap(struct node *head)
{
  struct node *temp =head;
  while(temp != NULL && temp->next!=NULL)
  {
      int x = temp->data;
      temp->data = temp->next->data;
      temp->next->data = x;
      temp = temp->next->next;
  }
}