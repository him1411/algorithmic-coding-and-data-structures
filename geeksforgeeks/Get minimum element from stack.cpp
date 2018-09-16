int _stack :: getMin()
{
   if (s.empty())
        return -1;
        
    else
        return minEle;
}
/*returns poped element from stack*/
int _stack ::pop()
{
   if (s.empty())
        {
            return -1;
        }
        int t = s.top();
        s.pop();
        if (t < minEle)
        {
           int mn = minEle;
            minEle = 2*minEle - t;
            return mn;
        }
 
        else
            return t;
}
/*push element x into the stack*/
void _stack::push(int x)
{
   if (s.empty())
    {
        minEle = x;
        s.push(x);
        return;
    }
    if (x < minEle)
    {
        s.push(2*x - minEle);
        minEle = x;
    }
    else
       s.push(x);
           
    return;
}