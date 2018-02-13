vector<int> Solution::wave(vector<int> &A) 
{
    sort(A.begin(),A.end());
    int temp,n =A.size();
    for(int i=0; i<n-1; i= i+2)
    {
        temp = A[i];
        A[i] = A[i+1];
        A[i+1] = temp;
    }
    return A;
}
