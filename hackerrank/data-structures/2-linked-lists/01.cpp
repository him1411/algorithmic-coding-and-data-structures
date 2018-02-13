//https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list/problem
/*
  Print elements of a linked list on console 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void Print(Node *head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<< temp->data<<endl;
        temp = temp->next;
    }
}
