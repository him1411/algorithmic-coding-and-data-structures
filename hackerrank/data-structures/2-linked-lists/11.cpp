//https://www.hackerrank.com/domains/data-structures/linked-lists
/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
    if ( head == NULL ) 
        return NULL;
    Node* temp = head->next;
    while ( temp != NULL && head->data == temp->data ) 
        temp = temp->next;
    
    head->next = RemoveDuplicates( temp );
    return head;
}