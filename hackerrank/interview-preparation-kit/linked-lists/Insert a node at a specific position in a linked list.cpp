/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int n)
{
    Node* newnode = new Node();
    newnode->data = data;

    if (head == NULL) 
    {
        return newnode;
    }

    if (n == 0) 
    {
       newnode->next = head;
       return newnode;
    }

    Node* current = head;
    while (n - 1 > 0) 
    {
        current = current->next;
        n--;
    }

    newnode->next = current->next;
    current->next = newnode;
    return head;
}
