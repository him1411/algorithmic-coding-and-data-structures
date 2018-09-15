bool possible(vector<int> A,int B,long long c)
{
    int n =A.size();
    long long temp = c;
    long long i=0;
    while(i<n)
    {
        if(B==0)
            return false;
        else if(temp - A[i]<0)
        {
            B--;
            temp=c;
        }
        else
        {
            temp = temp - A[i];
            i++;
        }
    }
    return true;
}

int Solution::books(vector<int> &A, int B) 
{
    long long l,r,mid,ans=-1;
    if(A.size()<B)
        return -1;
    l =0,r=LLONG_MAX;
    while(l<=r)
    {
        mid = (l+r)/2;
        if(possible(A,B,mid))
        {
            ans =mid;
            r =mid -1;
        }
        else
            l = mid+1;
    }
    return (int)ans;
}
