int Solution::searchMatrix(vector<vector<int> > &A, int B) 
{
    int i=0,n=A.size(),j=A[0].size()-1;
    while(i<n && j>=0)
    {
        if(A[i][j]==B)
        {
            return 1;
        }
        if(A[i][j] > B)
            j--;
        else
            i++;
    }
    
    return 0;
}
