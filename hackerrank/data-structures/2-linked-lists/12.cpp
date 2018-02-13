//https://www.hackerrank.com/challenges/detect-whether-a-linked-list-contains-a-cycle
/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) 
{
    if(head == NULL)
        return 0;
    
    Node* slow = head;
    Node* fast = head;
    while(fast!= NULL && fast->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        
        if(slow==fast)
            return 1;
    }
    return 0;
}
