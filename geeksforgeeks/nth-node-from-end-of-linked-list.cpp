
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* struct Node
 {
   int data;
   Node* next;
 }; */
/* Should return data of n'th node from the end of linked list */
int getNthFromLast(Node *head, int n)
{
    int len =0;
    Node *temp = head;
    while(temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    
    if(len<n)
        return -1;
        
    temp =head;
    
    for(int i=1;i<len-n+1;i++)
    {
        temp = temp ->next;
    }
    
    return temp->data;
}