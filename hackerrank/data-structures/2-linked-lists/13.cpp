//https://www.hackerrank.com/challenges/find-the-merge-point-of-two-joined-linked-lists/problem
/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB)
{
    Node* tempa = headA;
    Node* tempb = headB;
    while(tempa != tempb)
    {
        if(tempa->next == NULL)
            tempa = headB;
        else
            tempa = tempa->next;

        if(tempb->next == NULL)
            tempb = headA;
        else
            tempb = tempb->next;
    }
    return tempb->data;
} 
