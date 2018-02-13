//https://www.hackerrank.com/challenges/reverse-a-doubly-linked-list
/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* Reverse(Node* head)
{
    if(head==NULL)
        return NULL;
    head->prev = head->next;
    head->next = NULL;
    while(head->prev != NULL)
    {
        head = head->prev;
        Node* temp = head->next;
        head->next = head->prev;
        head->prev = temp;
    }
    return head;
}
