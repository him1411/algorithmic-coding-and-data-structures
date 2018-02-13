//https://www.hackerrank.com/challenges/reverse-a-linked-list
/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{
    if( (head==NULL) || (head->next == NULL) )
        return head;
    
    Node* temp = Reverse(head->next);
    Node* temp2 = temp;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = head;
    head->next = NULL;
    return temp2;
}
