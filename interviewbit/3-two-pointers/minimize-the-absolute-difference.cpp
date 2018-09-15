int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) 
{
    int p =A.size(),q=B.size(),r=C.size(),diff=INT_MAX;
    int ri=0,rj=0,rk=0;
    int i=0,j=0,k=0;
    while(i<p && j<q && k<r)
    {
        int mini = min( A[i],min(B[j],C[k]) );
        int maxi = max( A[i],max(B[j],C[k]) );
        
        if(maxi - mini < diff)
        {
            ri = i;
            rj = j;
            rk = k;
            diff = maxi -mini;
        }
        if(diff==0)
            break;
        
        if(A[i]==mini)
            i++;
        else if(B[j]==mini)
            j++;
        else
            k++;
    }
    return diff;
}
