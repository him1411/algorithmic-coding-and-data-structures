
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Link list Node  
struct Node {
    int data;
    Node* next;
}; */
Node* SortedMerge(Node* head1,   Node* head2)
{
    if(!head1)
        return head2;
        
    if(!head2)
        return head1;
        
    if(head1->data < head2->data)
    {
        head1->next = SortedMerge(head1->next,head2);
        return head1;
    }
    else
    {
        head2->next = SortedMerge(head1,head2->next);
        return head2;
    }
}