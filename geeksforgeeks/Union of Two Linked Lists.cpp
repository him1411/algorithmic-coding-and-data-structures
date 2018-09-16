
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
structure of the node is as
struct node
{
	int data;
	struct node* next;
};
*/
bool isPresent (struct node *head, int data)
{
    struct node *t = head;
    while (t != NULL)
    {
        if (t->data == data)
            return 1;
        t = t->next;
    }
    return 0;
}

struct node* makeUnion(struct node* head1, struct node* head2)
{
    node *result = NULL;
    node *t1 = head1, *t2 = head2;
    while (t1 != NULL)
    {
        push(&result, t1->data);
        t1 = t1->next;
    }
    while (t2 != NULL)
    {
        if (!isPresent(result, t2->data))
            push(&result, t2->data);
        t2 = t2->next;
    }
    vector<int> v;
    while(result!=NULL)
    {
        v.push_back(result->data);
        result=result->next;
    }
    sort(v.rbegin(),v.rend());
    node * ans =NULL;
    for(int i=0;i<v.size();i++)
    {
        push(&ans,v[i]);
    }
    return ans;
}
