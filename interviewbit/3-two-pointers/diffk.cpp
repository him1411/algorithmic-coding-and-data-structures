int Solution::diffPossible(vector<int> &A, int B) 
{
    if(A.size()==0 || A.size()==1)
        return 0;
    
    int n=A.size(),p=0,q=0;
    
    while(q<n)
    {
        if(p==q)
            q++;
        
        else if(A[q]-A[p] == B && q!=p)
            return 1;
            
        else if(A[q]-A[p]>B)
            p++;
        
        else if(A[q]-A[p]<B)
            q++;
    }
    return 0;
}
