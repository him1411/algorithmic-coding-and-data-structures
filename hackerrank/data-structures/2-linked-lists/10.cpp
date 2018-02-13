//https://www.hackerrank.com/challenges/get-the-value-of-the-node-at-a-specific-position-from-the-tail/problem
/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int pos)
{
    int count =0;
    Node* temp = head;
    Node* ans = head;
    while(temp!=NULL)
    {
        temp =temp->next;
        if(count > pos)
        {
            ans = ans->next;
        }
        count++;
    }
    return ans->data;
}
