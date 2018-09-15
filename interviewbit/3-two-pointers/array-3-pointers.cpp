int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) 
{
    int p=A.size(),q=B.size(),r=C.size();
    int ans = INT_MAX,temp1,temp2,temp3,i=0,j=0,k=0;
    
    while(i<p && j<q && k<r)
    {
        temp1=A[i]-B[j];
        temp2=B[j]-C[k];
        temp3=C[k]-A[i];
        ans=min(ans,max(abs(temp1),max(abs(temp2),abs(temp3))));
        
        if(abs(temp1)>=abs(temp2)&& abs(temp1)>=abs(temp3))
        {
            if(temp1>0)
                j++;
            else 
                i++;
        }
        
        else if(abs(temp2)>=abs(temp3)&& abs(temp2)>=abs(temp1))
        {
            if(temp2>0)
                k++;
            else 
                j++;
        }
        
        else if(abs(temp3)>=abs(temp2)&& abs(temp3)>=abs(temp1))
        {
            if(temp3>0)
                i++;
            else 
                k++;
        }
    }
    return ans;
}
