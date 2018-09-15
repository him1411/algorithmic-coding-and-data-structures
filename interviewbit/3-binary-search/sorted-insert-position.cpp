int Solution::searchInsert(vector<int> &A, int B) 
{
    int start=0,end=A.size(),mid;
    while(start <= end)
    {
        mid = (end+start)/2;
        if(A[mid] == B)
        {
            start = mid +1;
            ans = mid;
        }
        else
            end =mid-1;
    }
    return ans;
}
