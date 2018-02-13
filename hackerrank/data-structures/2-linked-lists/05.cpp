//https://www.hackerrank.com/challenges/delete-a-node-from-a-linked-list
/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
    if (position == 0)
        return head->next;
    head->next = Delete(head->next, position-1);
    return head;
}
