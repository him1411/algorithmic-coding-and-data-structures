void swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Solution::sortColors(vector<int> &A) 
{
    int lo =0,hi = A.size()-1, mid =0;
    
    while(mid <= hi)
    {
        if(A[mid] == 0 )
        {
            swap(&A[lo],&A[mid]);
            lo++;mid++;
        }
        else if(A[mid] == 1)
            mid++;
            
        else if(A[mid] == 2)
        {
            swap(&A[mid],&A[hi]);
            hi--;
        }
    }
}
