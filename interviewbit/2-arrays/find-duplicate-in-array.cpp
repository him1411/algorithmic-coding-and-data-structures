int Solution::repeatedNumber(const vector<int> &A) 
{
    int i,x1=0;
    for(i=1;i<A.size();i++)
    {
        x1^=A[i];
        x1^=i;
    }
    x1^=A[0];
    return x1;
}
