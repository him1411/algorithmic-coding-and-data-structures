int Solution::singleNumber(const vector<int> &A) 
{
    if(A.size()==0)
        return 0;
    
    int num = A[0];
    for(int i=1;i<A.size();i++)
    {
        num = num ^ A[i];
    }
    
    return num;
}
