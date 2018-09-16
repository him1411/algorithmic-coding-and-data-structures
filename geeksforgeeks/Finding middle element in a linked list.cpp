
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Link list Node 
struct Node {
    int data;
    Node* next;
}; */
/* Should return data of middle node. If linked list is empty, then  -1*/
int getMiddle(Node *head)
{
   int count=0;
   Node *temp =head;
   while(temp != NULL)
   {
       temp=temp->next;
       count++;
   }
   count = count/2;
   int i=0;
   temp=head;
   while(temp!= NULL)
   {
       if(i==count)
            return (temp->data);
            
        i++;
        temp=temp->next;
   }
}
