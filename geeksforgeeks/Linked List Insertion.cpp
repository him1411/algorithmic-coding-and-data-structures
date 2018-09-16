
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
Structure of the linked list node is as
struct node
{
    int data;
    struct node *next;
};
*/
// function inserts the data in front of the list
void insertAtBegining(struct node** headRef, int newData)
{
    node *newnode = new node;
    newnode->data = newData;
    newnode->next = (*headRef);
    (*headRef) = newnode;
}
// function appends the data at the end of the list
void insertAtEnd(struct node** headRef, int newData)
{
    node *newnode = new node;
    node *last = *headRef;
    newnode->data = newData;
    newnode->next = NULL;
    if(*headRef == NULL)
    {
        *headRef = newnode;
        return;
    }
    while(last->next != NULL)
        last = last->next;
        
    last->next = newnode;
    return;
}