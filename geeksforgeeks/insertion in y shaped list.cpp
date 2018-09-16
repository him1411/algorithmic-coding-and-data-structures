int count(Node *head)
{
    Node *current =head;
    int count=0;
    while(current != NULL)
    {
        count++;
        current=current->next;
    }
    return count;
}

int getintersection(int d,Node* head1 , Node*head2)
{
    int i;
    Node* curr1 = head1;
    Node* curr2 = head2;
    for(int i=0;i<d;i++)
    {
        if(curr1==NULL)
            return -1;
            
        curr1=curr1->next;
    }
    while(curr1!=NULL && curr2!=NULL)
    {
        if(curr1==curr2)
            return curr1->data;
            
        curr1=curr1->next;
        curr2=curr2->next;
    }
    return -1;
}

int intersectPoint(Node* head1, Node* head2)
{
    int c1 = count(head1);
    int c2 = count(head2);
    int d;
    if(c1>c2)
    {
        d = c1-c2;
        return getintersection(d,head1,head2);
    }
    else
    {
        d=c2-c1;
        return getintersection(d,head2,head1);
    }
}