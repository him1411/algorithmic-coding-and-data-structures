/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* SortedInsert(Node *head,int data)
{
    Node *temp = new Node;
    temp->data = data;
    if(head == NULL) 
    {
        temp->next = NULL; 
        temp->prev = NULL;
        return temp;
    }
    if(head->data >= temp->data) 
    {
        temp->next = head; 
        temp->prev = NULL;
        head->prev = temp;
        head = temp;
    } 
    else 
    {
        Node *pos = head;
        while(pos->next != NULL && pos->next->data < temp->data) 
            pos = pos->next;

        temp->prev = pos;
        temp->next = pos->next;
        if(pos->next != NULL)
            pos->next->prev = temp;

        pos->next = temp; 
    } 
   return head;
}
