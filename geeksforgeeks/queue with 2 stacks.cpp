void StackQueue :: push(int x)
 {
    if(s1.empty() && s2.empty() )
        s1.push(x);
    else 
        s2.push(x);
 }
/*The method pop which return the element poped out of the queue*/
int StackQueue :: pop()
{
    if(s1.empty())
        return -1;
    int temp = s1.top();
    s1.pop();
    if(s1.empty())
    {
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }
    return temp;
}
