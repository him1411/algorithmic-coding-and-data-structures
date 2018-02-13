//https://www.hackerrank.com/challenges/insert-a-node-at-the-tail-of-a-linked-list/problem
/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
    Node* new_node = new Node;
    Node* last =  head; 
    new_node->data  = data;
    new_node->next = NULL;
    if (head == NULL)
    {
       head = new_node;
       return head;
    }  
    while (last->next != NULL)
        last = last->next;

    last->next = new_node;
    return head; 
}
