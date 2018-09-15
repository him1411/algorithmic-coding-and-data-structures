int Solution::maximumGap(const vector<int> &A) 
{
    int n = A.size();
    
    vector<int> lmin(n,INT_MAX);
    vector<int> rmax(n,INT_MIN);
    
    lmin[0] = A[0];
    rmax[n-1] = A[n-1];
    for(int i=1;i<n;i++)
        lmin[i] = min(A[i],lmin[i-1]);
    
    for(int i=n-2;i>=0;i--)
        rmax[i] = max(A[i],rmax[i+1]);
        
    int i=0,j=0,maxxdiff=-1;
    
    while(j<n && i<n)
    {
        if(lmin[i]<=rmax[j])
        {
            maxxdiff = max(maxxdiff,j-i);
            j++;
        }
        else
            i++;
    }
    
    return maxxdiff;
}
