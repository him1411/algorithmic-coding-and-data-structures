int Solution::findMinXor(vector<int> &A) 
{
    sort(A.begin(),A.end());
    int minx = INT_MAX,x=0;
    for(int i=0;i<A.size()-1;i++)
    {
        x = A[i] ^ A[i+1];
        minx = min(minx,x);
    }
    return minx;
}