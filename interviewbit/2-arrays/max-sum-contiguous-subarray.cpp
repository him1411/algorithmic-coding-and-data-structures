int Solution::maxSubArray(const vector<int> &A) 
{
    int maxi = A[0];
    int currmax = A[0];
    for(int i =1 ; i < A.size() ; i++)
    {
        currmax = max(A[i], currmax+A[i]);
        maxi = max(maxi, currmax);
    }
    return maxi;
}