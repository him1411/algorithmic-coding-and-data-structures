
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

struct node* findIntersection(struct node* head1, struct node* head2)
{
    map<int,int> m1,m2;
    node* c1 = head1;
    node* c2 = head2;
    while(c1)
    {
        m1[c1->data]++;
        c1 = c1->next;
    }
    while(c2)
    {
        if(m1[c2->data]!=0) m2[c2->data]++;
        c2 = c2->next;
    }
    for(auto it= m2.begin();it!=m2.end();++it)
    {
        int freq = min(it->second,m1[it->first]);
        while(freq--) 
            cout<<it->first<<" ";
    }
    
    return NULL;
    
}
